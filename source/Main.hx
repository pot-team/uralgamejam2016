package;

import flash.display.Sprite;
import flash.display.StageAlign;
import flash.display.StageScaleMode;
import flash.events.Event;
import flash.Lib;
import flixel.FlxGame;
import flixel.math.FlxMath;
import flixel.util.FlxSave;
import openfl.display.FPS;
import flixel.FlxState;

class Main extends Sprite
{


	var gameWidth:Int = 640; // Width of the game in pixels (might be less / more in actual pixels depending on your zoom).
	var gameHeight:Int = 480; // Height of the game in pixels (might be less / more in actual pixels depending on your zoom).
	var initialState:Class<FlxState> = MenuState; // The FlxState the game starts with.
	var zoom:Float = -1; // If -1, zoom is automatically calculated to fit the window dimensions.
	var framerate:Int = 60; // How many frames per second the game should run at.
	var skipSplash:Bool = true; // Whether to skip the flixel splash screen that appears in release mode.
	var startFullscreen:Bool = true; // Whether to start the game in fullscreen on desktop targets

	public static function main():Void
	{
			Lib.current.addChild(new Main());
	}

	public function new():Void
	{
		super();
		if (stage != null)
		{
			init();
		}
		else
		{
			addEventListener(Event.ADDED_TO_STAGE, init);
		}
	}

	private function loadConfig():Void
	{
		var _settings:FlxSave = new FlxSave();
		_settings.bind("gamesettings");
		if (_settings.data.is_existed != null)
		{
			gameWidth = _settings.data.gameWidth;
			gameHeight = _settings.data.gameHeight;
			startFullscreen = _settings.data.startFullscreen;
			/*trace( gameWidth, gameHeight, startFullscreen );*/
			/*trace("data existed");*/
			/*_settings.erase();*/
		}
		else
		{
			/*trace("data not existed");*/
			_settings.data.gameWidth = gameWidth;
			_settings.data.gameHeight = gameHeight;
			_settings.data.startFullscreen = startFullscreen;
			_settings.data.is_existed = true;
			_settings.flush();
		}
	}

	private function init(?E:Event):Void
	{
		if (hasEventListener(Event.ADDED_TO_STAGE))
		{
			removeEventListener(Event.ADDED_TO_STAGE, init);
		}
		loadConfig();
		setupGame();
	}

	private function setupGame():Void
	{
		var stageWidth:Int = Lib.current.stage.stageWidth;
		var stageHeight:Int = Lib.current.stage.stageHeight;

		if (zoom == -1)
		{
			var ratioX:Float = stageWidth / gameWidth;
			var ratioY:Float = stageHeight / gameHeight;
			zoom = Math.min(ratioX, ratioY);
			gameWidth = Math.ceil(stageWidth / zoom);
			gameHeight = Math.ceil(stageHeight / zoom);
		}

		addChild(new FPS(10, 10, 0xffffff));
		addChild(new FlxGame(gameWidth, gameHeight, initialState, zoom, framerate, framerate, skipSplash, startFullscreen));
	}
}

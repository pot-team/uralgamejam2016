package;


import flixel.FlxG;
import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flash.system.System;
import flixel.util.FlxDestroyUtil;
using flixel.util.FlxSpriteUtil;
import flixel.util.FlxTimer;


class MenuState extends BaseState
{
	/*private var _btnPlay:FlxButton;*/
	/*private var _btnExit:FlxButton;*/

	override public function create():Void
	{

		_xml_id = "menu_state";

		super.create();
		FlxG.camera.bgColor = 0xFF000000;
		FlxG.mouse.visible = true;
		/*_btnPlay = new FlxButton(0, 0, 'Start', clickPlay);
        _btnPlay.screenCenter();
		_btnPlay.y = 240;
        add(_btnPlay);

		_btnExit = new FlxButton(0, 0, 'Exit', clickExit);
        _btnExit.screenCenter();
		_btnExit.y = _btnPlay.height + _btnPlay.y + 10;
        add(_btnExit);*/
	}

	public override function getRequest(name:String, target:Dynamic, data:Dynamic, ?params:Array<Dynamic>):Dynamic
	{
		return null;
	}

	public override function getEvent(name:String, sender:Dynamic, data:Dynamic, ?params:Array<Dynamic>):Void
	{

		switch (name)
		{
			case "click_button":
				if (params != null && params.length > 0)
				{
					switch (cast(params[0], String))
					{
						case "start": 		FlxG.switchState(new PlayState());
						case "exit": 		System.exit(0);
					}
				}
		}
	}
	override public function destroy():Void
	{
		super.destroy();
		/*_btnExit = FlxDestroyUtil.destroy(_btnExit);
		_btnPlay = FlxDestroyUtil.destroy(_btnPlay);*/
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}
	/*
	private function clickPlay():Void
	{
		FlxG.switchState(new PlayState());
	}

	private function clickExit():Void
	{
		System.exit(0);
	}*/

}

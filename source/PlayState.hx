package;

import flixel.FlxObject;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.util.FlxColor;
import flixel.util.FlxSpriteUtil;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.ui.FlxButton;
import flash.Lib;
import flash.display.BitmapData;
import flash.display.BitmapDataChannel;
import flixel.util.FlxStringUtil;
import flixel.util.FlxDestroyUtil;
import flixel.util.FlxTimer;
import flixel.math.FlxMath;
import flixel.FlxCamera;
import LevelData;


class PlayState extends BaseState
{
	private var hud:HUD;
	private var _player:Player;
	private var _lamp:Lamp;
	private var _spike:Spike;
	private var _spikes:Array<Spike>;
	/*private var _enemy:Enemy;*/
	private var _level_base:FlxTilemap;
	/*private var _level_walls:FlxTilemap;*/
	private static var TILE_WIDTH:Int = 16;
	private static var TILE_HEIGHT:Int = 16;
	private var _curtain:FlxSprite;



	override public function create():Void
	{
		super.create();
		/*trace(stageHeight, stageWidth);*/


		/*_highlightBox = new FlxSprite(0, 0);
		_highlightBox.makeGraphic(TILE_WIDTH, TILE_HEIGHT, FlxColor.TRANSPARENT);
		FlxSpriteUtil.drawRect(_highlightBox, 0, 0, TILE_WIDTH - 1, TILE_HEIGHT - 1, FlxColor.TRANSPARENT, { thickness: 1, color: FlxColor.RED });
		add(_highlightBox);*/
		FlxG.mouse.visible = false;
		setLevel();
		_lamp = new Lamp(2, 26);
		add(_lamp);
		_spike = new Spike(15, 33);
		add(_spike);
		generateSpikes();
		setPlayer();
		setCamera();
		/*_enemy = new Enemy(20, 26, _player,_level_base);*/
		/*add(_enemy);*/
		hud = new HUD(_player);
		/*hud.setMaxHealth(_player.health);*/
		add(hud);

	}
	override public function update(elapsed:Float):Void
	{
		if (FlxG.keys.justPressed.ESCAPE)
		{
			FlxG.switchState(new MenuState());
		}
		FlxG.collide(_player, _level_base);
		/*FlxG.collide(_player, _level_walls);*/
		/*FlxG.collide(_enemy, _level_base);*/
		/*FlxG.collide(_enemy, _level_walls);*/

		if (FlxG.overlap(_player, _spike))
		{
			_spike.hit(_player);
		}
		for (i in _spikes)
			if (FlxG.overlap(_player, i))
			{
				i.hit(_player);
			}
		if (!_player.alive)
		{
			new FlxTimer().start(4, endGame, 1);
		}
		hud.update(elapsed);
		super.update(elapsed);
	}


	private function endGame(f:FlxTimer):Void
	{
		FlxG.switchState(new MenuState());
	}

	function setPlayer():Void
	{
		_player = new Player(2, 22);
        add(_player);
	}

	function generateSpikes():Void
	{
		_spikes = new Array<Spike>();
		for (i in 0...73)
		{
			_spikes.push(new Spike((i+3)*3, 33));
			add(_spikes[i]);
		}
	}

	function setLevel():Void
	{
		FlxG.camera.bgColor = 0xFF399199;
		var _tileset_path0:String = "assets/images/tileset_asphalt_2.png";
		/*var _tileset_path1:String = "assets/images/tileset_walls.png";*/
		/*_curtain = new FlxSprite();*/
		/*_curtain.makeGraphic(640, 480, 0x66000000);*/
		/*57x30*/
		var level_data = LevelData.level_data;
		var level_data_wall = LevelData.level_data_wall;

		_level_base = new FlxTilemap();
		_level_base.loadMapFromCSV("assets/data/level_0_base.txt", _tileset_path0, TILE_WIDTH, TILE_HEIGHT, AUTO);
		add(_level_base);

		/*_level_walls = new FlxTilemap();*/

		/*_level_walls.loadMapFromCSV("assets/data/level_0_walls.txt", _tileset_path1, TILE_WIDTH, TILE_HEIGHT, AUTO);*/
		/*add(_level_walls);*/
	}

	function setCamera():Void
	{
		FlxG.camera.follow(_player, PLATFORMER);
		FlxG.camera.setScrollBoundsRect(16, 16, _level_base.width-32, _level_base.height-16, true);
	}

	override public function destroy():Void
	{
		super.destroy();
        _player = FlxDestroyUtil.destroy(_player);
		_level_base = FlxDestroyUtil.destroy(_level_base);
		/*_level_walls = FlxDestroyUtil.destroy(_level_walls);*/
	}
}

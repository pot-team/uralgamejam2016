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
import flixel.math.FlxMath;
import flixel.FlxCamera;
import LevelData;


class PlayState extends BaseState
{
	private var _player:Player;
	private var _lamp:Lamp;
	private var _level_base:FlxTilemap;
	private var _level_walls:FlxTilemap;
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

		setLevel();
		_lamp = new Lamp(2, 23);
		add(_lamp);
		setPlayer();
		setCamera();


	}
	override public function update(elapsed:Float):Void
	{
		FlxG.collide(_player, _level_base);
		FlxG.collide(_player, _level_walls);
		super.update(elapsed);
	}

	function setPlayer():Void
	{
		_player = new Player(2, 22);
        add(_player);
	}

	function setLevel():Void
	{
		FlxG.camera.bgColor = 0xFF399199;
		var _tileset_path0:String = "assets/images/tileset_asphalt_2.png";
		var _tileset_path1:String = "assets/images/tileset_walls.png";
		_curtain = new FlxSprite();
		_curtain.makeGraphic(640, 480, 0x66000000);
		/*57x30*/
		var level_data = LevelData.level_data;
		var level_data_wall = LevelData.level_data_wall;

		_level_base = new FlxTilemap();
		_level_base.loadMapFromCSV(FlxStringUtil.arrayToCSV(level_data, 57), _tileset_path0, TILE_WIDTH, TILE_HEIGHT, AUTO);
		add(_level_base);

		_level_walls = new FlxTilemap();

		_level_walls.loadMapFromCSV(FlxStringUtil.arrayToCSV(level_data_wall, 57), _tileset_path1, TILE_WIDTH, TILE_HEIGHT, AUTO);
		add(_level_walls);
	}

	function setCamera():Void
	{
		FlxG.camera.follow(_player, PLATFORMER);
		FlxG.camera.setScrollBoundsRect(0, 0, _level_base.width, _level_base.height, true);
	}

	override public function destroy():Void
	{
		super.destroy();
        _player = FlxDestroyUtil.destroy(_player);
		_level_base = FlxDestroyUtil.destroy(_level_base);
		_level_walls = FlxDestroyUtil.destroy(_level_walls);
	}
}

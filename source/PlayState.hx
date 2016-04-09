package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;

class PlayState extends BaseState
{
	private var _player:Player;

	override public function create():Void
	{
		super.create();
        /*_player = new Player(10, 10);*/
        /*add(_player);*/
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}

	override public function destroy():Void
	{
		super.destroy();
        _player = FlxDestroyUtil.destroy(_player);
	}
}

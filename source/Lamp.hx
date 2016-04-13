package;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.math.FlxAngle;
import flixel.util.FlxColor;
import flixel.math.FlxMath;
import flixel.util.FlxTimer;


class Lamp extends FlxSprite
{
    public function new(X:Float=0, Y:Float=0)
    {
        super(X * 16, Y * 16);
		loadGraphic("assets/images/tileset_post_lamp.png", true, 16, 112);
		setSize(16, 112);
		/*offset.set(9, 8);*/

		animation.add("idle", [for (i in 0...4) i], 5);

    }


    override public function update(elapsed:Float):Void
	{
        animate();
		super.update(elapsed);
	}
    function animate():Void
	{
			animation.play("idle");
	}
}

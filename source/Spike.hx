package;

import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.math.FlxAngle;
import flixel.util.FlxColor;
import flixel.math.FlxMath;
import flixel.util.FlxTimer;


class Spike extends FlxSprite
{

    private var hitStrength:Int = 3;
    private var _delay:Int = 7;


    public function new(X:Float=0, Y:Float=0)
    {
        super(X * 16, Y * 16 - 16);
        loadGraphic("assets/images/Sprite-0002.png", true, 32, 16);
    }
    public function hit(object:FlxObject):Void
    {
        _delay--;
        if (_delay < 0)
        {
            object.hurt(hitStrength);
            _delay = 7;
        }
    }
    override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}
}

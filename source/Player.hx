package;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.util.FlxAngle;
import flixel.util.FlxColor;

class Player extends FlxSprite
{
    /*
    // EXAMPLE CODE BELOW
    public var speed:Float = 200;
    public var moving:Bool = false;
    public function new(X:Float=0, Y:Float=0)
    {
        super(X, Y);
        loadGraphic("assets/images/crt0.png", true, 32, 48);
        animation.add("walk", [for (i in 0...4) i], 16);
        setFacingFlip(FlxObject.RIGHT, true, false);
        setFacingFlip(FlxObject.LEFT, false, false);
        //setSize(32, 48);
        //makeGraphic(16, 16, FlxColor.BLUE);
        drag.x = drag.y = 1600;
    }

    override public function update():Void
    {
        movement();
        animate();
        super.update();
    }

    private function animate():Void
    {
        if (moving)
            animation.play('walk');
        else
            animation.pause();
    }

    private function movement():Void
    {
        var _up:Bool = false;
        var _down:Bool = false;
        var _left:Bool = false;
        var _right:Bool = false;
        _up = FlxG.keys.anyPressed(["UP", "W"]);
        _down = FlxG.keys.anyPressed(["DOWN", "S"]);
        _left = FlxG.keys.anyPressed(["LEFT", "A"]);
        _right = FlxG.keys.anyPressed(["RIGHT", "D"]);
        if (_up && _down)
            _up = _down = false;
        if (_left && _right)
            _left = _right = false;
        if (_up || _down || _left || _right)
        {
            moving = true;
            var mA:Float = 0;
            if (_up)
            {
                mA = -90;
                if (_left)
                {
                    mA -= 45;
                    facing = FlxObject.LEFT;
                }
                else if (_right)
                {
                    facing = FlxObject.RIGHT;
                    mA += 45;
                }
            }
            else if (_down)
            {
                mA = 90;
                if (_left)
                    mA += 45;
                else if (_right)
                    mA -= 45;
            }
            else if (_left)
            {
                mA = 180;
                facing = FlxObject.LEFT;
            }
            else if (_right)
            {
                mA = 0;
                facing = FlxObject.RIGHT;
            }
            FlxAngle.rotatePoint(speed, 0, 0, 0, mA, velocity);
        }
        else
            moving = false;
    }
    */
}

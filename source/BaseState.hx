package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.util.FlxColor;
import openfl.display.FPS;



class BaseState extends FlxState
{
    private var fps:FPS;

    override public function create():Void
    {
        super.create();
        FlxG.addChildBelowMouse(fps = new FPS(FlxG.width - 60, 5, FlxColor.WHITE));
    }

    override public function update(elapsed:Float):Void
    {
        super.update(elapsed);
    }

    override public function destroy():Void
    {
        super.destroy();
        FlxG.removeChild(fps);
    }
}

package;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.math.FlxAngle;
import flixel.util.FlxColor;
import flixel.math.FlxMath;
import flixel.util.FlxTimer;


class Player extends FlxSprite
{
    var _maxWalkSpeed:Int = 140;
	var _maxRunSpeed:Int = 200;
	var _gravity:Int = 1600;
	var _maxFallSpeed:Int = 800;
	var _jumpForce:Int = 420;
	var _maxAcceleration:Int = 1000;
	var _drag:Int = 1000;
    /*
    // EXAMPLE CODE BELOW
    public var speed:Float = 200;
    public var moving:Bool = false;
    */
    public function new(X:Float=0, Y:Float=0)
    {
        super(X * 16, Y * 16 - 52);
		loadGraphic("assets/images/sanji.png", true, 47, 52);
		setSize(47, 47);
		/*offset.set(9, 8);*/

		animation.add("idle", [0]);
		animation.add("walk", [for (i in 0...8) i+3], 12);
		/*animation.add("run" , [for (i in 0...8) i], 24);*/
        animation.add("jump", [1, 2], 3);
		/*animation.add("skid", [14]);*/
		/*animation.add("check", [9, 10, 11], 16, false);*/
		/*animation.add("death", [12]);*/

		setFacingFlip(FlxObject.LEFT, true, false);
		setFacingFlip(FlxObject.RIGHT, false, false);

		maxVelocity.y = _maxFallSpeed;
		acceleration.y = _gravity;
		drag.x = _drag;
    }


    override public function update(elapsed:Float):Void
	{
		controls();
        animate();
		super.update(elapsed);
	}

	function controls():Void
	{
        var xForce:Float = 0;
		var running:Bool = false;
		var jumping:Bool = false;

        if (FlxG.keys.anyPressed(["LEFT", "A"])) xForce--;
		if (FlxG.keys.anyPressed(["RIGHT", "D"])) xForce++;
		if (FlxG.keys.anyJustPressed(["SPACE", "UP", "W", "C"])) jumping = true;
		if (FlxG.keys.anyJustReleased(["SPACE", "UP", "W", "C"])) velocity.y = velocity.y * 0.5;
		if (FlxG.keys.anyPressed(["SHIFT", "X"])) running = true;

		xForce = FlxMath.bound(xForce, -1, 1);

		running? maxVelocity.x = _maxRunSpeed: maxVelocity.x = _maxWalkSpeed;
		acceleration.x = xForce * _maxAcceleration;
		if (jumping && isTouching(FlxObject.FLOOR))
        {
			var finalJumpForce:Float = -(_jumpForce + Math.abs(velocity.x * 0.25));
			velocity.y = finalJumpForce;
		}

	}

    function animate():Void
	{
		if (acceleration.x > 0) facing = FlxObject.RIGHT;
		else if (acceleration.x < 0) facing = FlxObject.LEFT;
		if (!isTouching(FlxObject.FLOOR)) animation.play("jump");
		else {
			if (velocity.x == 0) animation.play("idle");
			/*else if (velocity.x > 0 && acceleration.x < 0 || velocity.x < 0 && acceleration.x > 0) animation.play("skid");*/
			/*else if (Math.abs(velocity.x) > _maxWalkSpeed) animation.play("run");*/
			else animation.play("walk");
		}
	}

}

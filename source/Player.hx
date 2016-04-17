package;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.math.FlxAngle;
import flixel.util.FlxColor;
import flixel.math.FlxMath;
import flixel.math.FlxPoint;
import flixel.util.FlxTimer;
import flixel.util.FlxPath;


class Player extends FlxSprite
{
    var _scale:Float = 1.5;
    var _maxWalkSpeed:Int = 140;
	var _maxRunSpeed:Int = 200;
	var _gravity:Int = 1600;
	var _maxFallSpeed:Int = 800;
	var _jumpForce:Int = 630;
	var _maxAcceleration:Int = 1000;
	var _drag:Int = 1000;
    var _doubleJump:Bool = false;

    /*
    // EXAMPLE CODE BELOW
    public var speed:Float = 200;
    public var moving:Bool = false;
    */
    public function new(X:Float=0, Y:Float=0)
    {
        super(X * 16, Y * 16 - 48);
        health = 100;
        var _w:Int = 32;
        var _h:Int = 48;

        _maxWalkSpeed = _maxWalkSpeed * 2;
        /*_maxRunSpeed = cast (_maxRunSpeed * _scale, Int);*/

		loadGraphic("assets/images/Sprite-0001.png", true, _w, _h);
        _w = 64;
        _h = 96;
        setGraphicSize(_w, _h);
        updateHitbox();
        setSize(32, 96);
        offset.set(0, -24);


		animation.add("idle", [0, 1], 4);
        animation.add("walk", [for (i in 2...9) i], 12);
		/*animation.add("run" , [for (i in 0...6) i+6], 12);*/
        animation.add("jump", [10, 0], 3);
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
		/*if (FlxG.keys.anyPressed(["SHIFT", "X"])) running = true;*/

		xForce = FlxMath.bound(xForce, -1, 1);

		running? maxVelocity.x = _maxRunSpeed: maxVelocity.x = _maxWalkSpeed;
		acceleration.x = xForce * _maxAcceleration;
		if (jumping && (isTouching(FlxObject.FLOOR) || !_doubleJump))
        {
			var finalJumpForce:Float = -(_jumpForce + Math.abs(velocity.x * 0.25));
			velocity.y = finalJumpForce;
            if (!isTouching(FlxObject.FLOOR) && !_doubleJump)
                _doubleJump = true;
		}
	}

    function animate():Void
	{
		if (acceleration.x > 0) facing = FlxObject.RIGHT;
		else if (acceleration.x < 0) facing = FlxObject.LEFT;
		if (!isTouching(FlxObject.FLOOR)) animation.play("jump");
		else {
            _doubleJump = false;
			if (velocity.x == 0) animation.play("idle");
			/*else if (velocity.x > 0 && acceleration.x < 0 || velocity.x < 0 && acceleration.x > 0) animation.play("skid");*/
			/*else if (Math.abs(velocity.x) > _maxWalkSpeed) animation.play("run");*/
			else animation.play("walk");
		}
	}
}

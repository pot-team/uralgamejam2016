package;

import flixel.group.FlxSpriteGroup;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.text.FlxText;
import flixel.ui.FlxBar;

class HUD extends FlxSpriteGroup
{
    private var healthBar:FlxBar;
    private var hp:Float;
	private var maxHp:Float;

    public function new(player:FlxSprite)
	{
		super();
		scrollFactor.x = 0;
		scrollFactor.y = 0;

        healthBar = new FlxBar(8, 8, LEFT_TO_RIGHT, 128, 8, player, "health", true);
        healthBar.createFilledBar(0xff800000, 0xFFe60000, true, FlxColor.GRAY);
		add(healthBar);
	}

    override public function update(elapsed:Float):Void
    {
        healthBar.update(elapsed);
	}
}

package;


import flixel.FlxG;
import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flash.system.System;
import flixel.util.FlxDestroyUtil;
using flixel.util.FlxSpriteUtil;


class MenuState extends BaseState
{

	override public function create():Void
	{

			_xml_id = "menu_state";

			super.create();
	}
	public override function getEvent(name:String, sender:Dynamic, data:Dynamic, ?params:Array<Dynamic>):Void
	{

		switch (name)
		{
			case "click_button":
				if (params != null && params.length > 0)
				{
					switch (cast(params[0], String))
					{
						case "start": 		FlxG.switchState(new PlayState());
						case "exit": 		System.exit(0);
					}
				}
		}
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}

}

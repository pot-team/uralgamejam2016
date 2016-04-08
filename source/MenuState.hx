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
		/*Я хз зачем это*/
			/*FlxG.cameras.bgColor = 0x1a131c1b;*/
			/*FlxG.log.redirectTraces = false;*/

			_xml_id = "menu_state";

			super.create();
	}
	public override function getEvent(name:String, sender:Dynamic, data:Dynamic, ?params:Array<Dynamic>):Void
	{
		var str:String = "";

		switch (name)
		{
			/*case "finish_load":
				var radio:FlxUIRadioGroup = cast _ui.getAsset("locale_radio");
				if (radio != null && Main.tongue != null)
				{
					radio.selectedId = Main.tongue.locale.toLowerCase();
				}*/
			case "click_button":
				if (params != null && params.length > 0)
				{
					switch (cast(params[0], String))
					{
						case "start": 	FlxG.switchState(new PlayState());
						case "exit": 	System.exit(0);
						/*case "saves": FlxG.switchState(new State_SaveMenu());
						case "menu": FlxG.switchState(new State_TestMenu());
						case "battle": FlxG.switchState(new State_Battle());
						case "default_test": FlxG.switchState(new State_DefaultTest());
						case "code_test": FlxG.switchState(new State_CodeTest());
						case "popup": openSubState(new Popup_Demo());*/
					}
				}
			/*case "click_radio_group":
				var id:String = cast data;
				if (Main.tongue != null)
				{
					Main.tongue.init(id, reloadState);
				}*/
		}
	}

	private function reloadState():Void
	{
		FlxG.switchState(new MenuState());
	}
	/*
	  Function that is called once every frame.
	 */
	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}

}

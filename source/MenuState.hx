package;


import flixel.FlxG;
import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flash.system.System;
import flixel.util.FlxDestroyUtil;
/*import haxe.ui.toolkit.controls.CheckBox;*/
using flixel.util.FlxSpriteUtil;



class MenuState extends BaseState
{
	private var _btnPlay:FlxButton;
	private var _btnSettings:FlxButton;
	private var _btnExit:FlxButton;


	override public function create():Void
	{
		/*var*/
		var offset_y = FlxG.height / 8;
		var difference_y = 0;
		var step_y = 30;
		super.create();
        _btnPlay = new FlxButton(0, 0, 'Start', clickPlay);
		_btnPlay.x = (FlxG.width / 2) - (_btnPlay.width / 2);
		_btnPlay.y = (FlxG.height / 2) - _btnPlay.height + offset_y + difference_y;
		difference_y += step_y;
        /*_btnPlay.screenCenter();*/
        add(_btnPlay);
/*
		_btnSettings = new FlxButton(0, 0, 'Settings', clickSetting);
        _btnSettings.screenCenter();
		_btnSettings.x = (FlxG.width / 2) - (_btnSettings.width / 2);
		_btnSettings.y = _btnPlay.y + difference_y;
		difference_y += step_y;
        add(_btnSettings);
		*/

		_btnExit = new FlxButton(0, 0, 'Exit', clickExit);
        /*_btnExit.screenCenter();*/
		_btnExit.x = (FlxG.width / 2) - (_btnExit.width / 2);
		_btnExit.y = _btnPlay.y + difference_y;
        add(_btnExit);
	}

	override public function destroy():Void
	{
		super.destroy();
        _btnPlay = FlxDestroyUtil.destroy(_btnPlay);
		_btnSettings = FlxDestroyUtil.destroy(_btnSettings);
		_btnExit = FlxDestroyUtil.destroy(_btnExit);
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}

    private function clickPlay():Void
    {
        FlxG.switchState(new PlayState());
    }

	private function clickSetting():Void
	{
		FlxG.switchState(new SettingsState());
	}
	private function clickExit():Void
	{
		System.exit(0);
	}

}

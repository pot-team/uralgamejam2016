package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;

class SettingsState extends BaseState
{
	private var _txtResolution:FlxText;
	private var _txtIsFullScreen:FlxText;
	private var _btnCheckbox:FlxButton;
	private var _btnReturn:FlxButton;
	private var _btnSave:FlxButton;

	override public function create():Void
	{
		super.create();
		var difference_y = 0;
		var step_y = 30;
		_txtResolution = new FlxText(0, 0, 0, "Resolution");
		_txtResolution.x = (FlxG.width / 4) - (_txtResolution.width / 2);
		_txtResolution.y = (FlxG.height / 4) - _txtResolution.height + difference_y;
		difference_y += step_y;
		add(_txtResolution);

		_txtIsFullScreen = new FlxText(0, 0, 0, "FullScreen");
		_txtIsFullScreen.x = _txtResolution.x;
		_txtIsFullScreen.y = _txtResolution.y + difference_y;
		difference_y += step_y;
		add(_txtIsFullScreen);

		_btnCheckbox = new FlxButton(0, 0, "", clickReturn);
		_btnCheckbox.width = 10;
		_btnCheckbox.height = 10;
		_btnCheckbox.x = (FlxG.width / 4) +  _txtIsFullScreen.x;
		_btnCheckbox.y = 	_txtIsFullScreen.y;
		add(_btnCheckbox);

		_btnReturn = new FlxButton(0, 0, "Back", clickReturn);
		_btnReturn.x = (FlxG.width / 4) * 3 - (_btnReturn.width / 2);
		_btnReturn.y = (FlxG.height / 4) * 3 - _btnReturn.height;
		add(_btnReturn);

		_btnSave = new FlxButton(0, 0, "Save");
		_btnSave.x = _btnReturn.x - _btnReturn.width - 10;
		_btnSave.y = _btnReturn.y;
		add(_btnSave);
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}

	private function clickReturn():Void
	{
		FlxG.switchState(new MenuState());
	}
}

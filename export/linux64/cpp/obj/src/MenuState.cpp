#include <hxcpp.h>

#ifndef INCLUDED_BaseState
#include <BaseState.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_system_System
#include <openfl/_legacy/system/System.h>
#endif

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",13,0xdfbcb22c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(13)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	super::__construct(tmp);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > _result_ = new MenuState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > _result_ = new MenuState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",19,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(23)
		this->super::create();
		HX_STACK_LINE(24)
		Dynamic tmp = this->clickPlay_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		::flixel::ui::FlxButton tmp1 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_HCSTRING("Start","\x42","\xe4","\x38","\x17"),tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		this->_btnPlay = tmp1;
		HX_STACK_LINE(25)
		::flixel::ui::FlxButton tmp2 = this->_btnPlay;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		tmp2->screenCenter(null());
		HX_STACK_LINE(26)
		::flixel::ui::FlxButton tmp3 = this->_btnPlay;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(26)
		tmp3->set_y((int)240);
		HX_STACK_LINE(27)
		::flixel::ui::FlxButton tmp4 = this->_btnPlay;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		this->add(tmp4);
		HX_STACK_LINE(29)
		Dynamic tmp5 = this->clickExit_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(29)
		::flixel::ui::FlxButton tmp6 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_HCSTRING("Exit","\x3e","\x23","\xf7","\x2d"),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(29)
		this->_btnExit = tmp6;
		HX_STACK_LINE(30)
		::flixel::ui::FlxButton tmp7 = this->_btnExit;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(30)
		tmp7->screenCenter(null());
		HX_STACK_LINE(31)
		::flixel::ui::FlxButton tmp8 = this->_btnExit;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(31)
		::flixel::ui::FlxButton tmp9 = this->_btnPlay;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(31)
		Float tmp10 = tmp9->get_height();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(31)
		::flixel::ui::FlxButton tmp11 = this->_btnPlay;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(31)
		Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(31)
		Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(31)
		Float tmp14 = (tmp13 + (int)10);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(31)
		tmp8->set_y(tmp14);
		HX_STACK_LINE(32)
		::flixel::ui::FlxButton tmp15 = this->_btnExit;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(32)
		this->add(tmp15);
	}
return null();
}


Void MenuState_obj::destroy( ){
{
		HX_STACK_FRAME("MenuState","destroy",0xf9ac905e,"MenuState.destroy","MenuState.hx",51,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		::flixel::ui::FlxButton tmp = this->_btnPlay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		::flixel::ui::FlxButton tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		this->_btnPlay = tmp1;
		HX_STACK_LINE(53)
		::flixel::ui::FlxButton tmp2 = this->_btnExit;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		::flixel::ui::FlxButton tmp3 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		this->_btnExit = tmp3;
		HX_STACK_LINE(54)
		this->super::destroy();
	}
return null();
}


Void MenuState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",58,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(59)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		this->super::update(tmp);
	}
return null();
}


Void MenuState_obj::clickPlay( ){
{
		HX_STACK_FRAME("MenuState","clickPlay",0x5f6a9ec0,"MenuState.clickPlay","MenuState.hx",64,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		::PlayState tmp = ::PlayState_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		::flixel::FlxState nextState = tmp;		HX_STACK_VAR(nextState,"nextState");
		HX_STACK_LINE(64)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		::flixel::FlxState tmp2 = nextState;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		bool tmp3 = tmp1->_state->switchTo(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		if ((tmp3)){
			HX_STACK_LINE(64)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(64)
			tmp4->_requestedState = nextState;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickPlay,(void))

Void MenuState_obj::clickExit( ){
{
		HX_STACK_FRAME("MenuState","clickExit",0x582e67ea,"MenuState.clickExit","MenuState.hx",69,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		::openfl::_legacy::_system::System_obj::exit((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickExit,(void))


MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(_btnPlay,"_btnPlay");
	HX_MARK_MEMBER_NAME(_btnExit,"_btnExit");
	::BaseState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_btnPlay,"_btnPlay");
	HX_VISIT_MEMBER_NAME(_btnExit,"_btnExit");
	::BaseState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_btnPlay") ) { return _btnPlay; }
		if (HX_FIELD_EQ(inName,"_btnExit") ) { return _btnExit; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickPlay") ) { return clickPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"clickExit") ) { return clickExit_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_btnPlay") ) { _btnPlay=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_btnExit") ) { _btnExit=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_btnPlay","\xf1","\xd3","\x9c","\x11"));
	outFields->push(HX_HCSTRING("_btnExit","\x1b","\x9d","\x60","\x0a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,_btnPlay),HX_HCSTRING("_btnPlay","\xf1","\xd3","\x9c","\x11")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,_btnExit),HX_HCSTRING("_btnExit","\x1b","\x9d","\x60","\x0a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_btnPlay","\xf1","\xd3","\x9c","\x11"),
	HX_HCSTRING("_btnExit","\x1b","\x9d","\x60","\x0a"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("clickPlay","\x5c","\x9a","\x59","\x29"),
	HX_HCSTRING("clickExit","\x86","\x63","\x1d","\x22"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

hx::Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("MenuState","\xd2","\xbf","\xb6","\xc0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MenuState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}


#include <hxcpp.h>

#ifndef INCLUDED_BaseState
#include <BaseState.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_display_FPS
#include <openfl/display/FPS.h>
#endif

Void BaseState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("BaseState","new",0x5ed13112,"BaseState.new","BaseState.hx",11,0x9b67169e)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(11)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	super::__construct(tmp);
}
;
	return null();
}

//BaseState_obj::~BaseState_obj() { }

Dynamic BaseState_obj::__CreateEmpty() { return  new BaseState_obj; }
hx::ObjectPtr< BaseState_obj > BaseState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< BaseState_obj > _result_ = new BaseState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic BaseState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BaseState_obj > _result_ = new BaseState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void BaseState_obj::create( ){
{
		HX_STACK_FRAME("BaseState","create",0x73d6018a,"BaseState.create","BaseState.hx",16,0x9b67169e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17)
		this->super::create();
		HX_STACK_LINE(18)
		int tmp = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(18)
		int tmp1 = (tmp - (int)60);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		::openfl::display::FPS tmp2 = ::openfl::display::FPS_obj::__new(tmp1,(int)5,(int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		::openfl::display::FPS tmp3 = this->fps = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(18)
		::flixel::FlxG_obj::addChildBelowMouse_openfl_display_FPS(tmp3,null());
	}
return null();
}


Void BaseState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("BaseState","update",0x7ecc2097,"BaseState.update","BaseState.hx",22,0x9b67169e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(23)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		this->super::update(tmp);
	}
return null();
}


Void BaseState_obj::destroy( ){
{
		HX_STACK_FRAME("BaseState","destroy",0xfa86ceac,"BaseState.destroy","BaseState.hx",27,0x9b67169e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		this->super::destroy();
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::openfl::display::FPS tmp = this->fps;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(29)
			::openfl::display::FPS Child = tmp;		HX_STACK_VAR(Child,"Child");
			HX_STACK_LINE(29)
			::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(29)
			::openfl::display::FPS tmp2 = Child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(29)
			bool tmp3 = tmp1->contains(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(29)
			if ((tmp3)){
				HX_STACK_LINE(29)
				::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(29)
				::openfl::display::FPS tmp5 = Child;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(29)
				tmp4->removeChild(tmp5);
			}
			HX_STACK_LINE(29)
			Child;
		}
	}
return null();
}



BaseState_obj::BaseState_obj()
{
}

void BaseState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseState);
	HX_MARK_MEMBER_NAME(fps,"fps");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BaseState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fps,"fps");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BaseState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fps") ) { return fps; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BaseState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fps") ) { fps=inValue.Cast< ::openfl::display::FPS >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::FPS*/ ,(int)offsetof(BaseState_obj,fps),HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseState_obj::__mClass,"__mClass");
};

#endif

hx::Class BaseState_obj::__mClass;

void BaseState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("BaseState","\x20","\x00","\xc3","\x35");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BaseState_obj >;
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


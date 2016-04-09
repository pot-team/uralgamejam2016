#include <hxcpp.h>

#ifndef INCLUDED_BaseState
#include <BaseState.h>
#endif
#ifndef INCLUDED_LevelData
#include <LevelData.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapAutoTiling
#include <flixel/tile/FlxTilemapAutoTiling.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",22,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(22)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	super::__construct(tmp);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",34,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		this->setLevel();
		HX_STACK_LINE(45)
		this->setPlayer();
		HX_STACK_LINE(46)
		this->setCamera();
	}
return null();
}


Void PlayState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",51,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(52)
		::Player tmp = this->_player;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		::flixel::tile::FlxTilemap tmp1 = this->_level_base;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		Dynamic tmp2 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		::flixel::FlxG_obj::overlap(tmp,tmp1,null(),tmp2);
		HX_STACK_LINE(53)
		::Player tmp3 = this->_player;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		::flixel::tile::FlxTilemap tmp4 = this->_level_walls;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		Dynamic tmp5 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(53)
		::flixel::FlxG_obj::overlap(tmp3,tmp4,null(),tmp5);
		HX_STACK_LINE(54)
		Float tmp6 = elapsed;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(54)
		this->super::update(tmp6);
	}
return null();
}


Void PlayState_obj::setPlayer( ){
{
		HX_STACK_FRAME("PlayState","setPlayer",0xd3b32452,"PlayState.setPlayer","PlayState.hx",58,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		::Player tmp = ::Player_obj::__new((int)2,(int)22);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		this->_player = tmp;
		HX_STACK_LINE(60)
		::Player tmp1 = this->_player;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		this->add(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,setPlayer,(void))

Void PlayState_obj::setLevel( ){
{
		HX_STACK_FRAME("PlayState","setLevel",0x2f5b05b3,"PlayState.setLevel","PlayState.hx",64,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		tmp->bgColor = (int)-9583926;
		HX_STACK_LINE(66)
		::String _tileset_path0 = HX_HCSTRING("assets/images/tileset_grass_fall.png","\xb5","\x1b","\x8e","\xa5");		HX_STACK_VAR(_tileset_path0,"_tileset_path0");
		HX_STACK_LINE(67)
		::String _tileset_path1 = HX_HCSTRING("assets/images/tileset_walls.png","\xce","\x6f","\xc4","\x6d");		HX_STACK_VAR(_tileset_path1,"_tileset_path1");
		HX_STACK_LINE(68)
		::flixel::FlxSprite tmp1 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		this->_curtain = tmp1;
		HX_STACK_LINE(69)
		::flixel::FlxSprite tmp2 = this->_curtain;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		tmp2->makeGraphic((int)640,(int)480,(int)1711276032,null(),null());
		HX_STACK_LINE(71)
		Array< int > level_data = ::LevelData_obj::level_data;		HX_STACK_VAR(level_data,"level_data");
		HX_STACK_LINE(72)
		Array< int > level_data_wall = ::LevelData_obj::level_data_wall;		HX_STACK_VAR(level_data_wall,"level_data_wall");
		HX_STACK_LINE(74)
		::flixel::tile::FlxTilemap tmp3 = ::flixel::tile::FlxTilemap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		this->_level_base = tmp3;
		HX_STACK_LINE(75)
		::flixel::tile::FlxTilemap tmp4 = this->_level_base;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		::String tmp5 = ::flixel::util::FlxStringUtil_obj::arrayToCSV(level_data,(int)57,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(75)
		::String tmp6 = _tileset_path0;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(75)
		int tmp7 = ::PlayState_obj::TILE_WIDTH;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(75)
		int tmp8 = ::PlayState_obj::TILE_HEIGHT;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(75)
		tmp4->loadMapFromCSV(tmp5,tmp6,tmp7,tmp8,::flixel::tile::FlxTilemapAutoTiling_obj::AUTO,null(),null(),null());
		HX_STACK_LINE(76)
		::flixel::tile::FlxTilemap tmp9 = this->_level_base;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(76)
		this->add(tmp9);
		HX_STACK_LINE(78)
		::flixel::tile::FlxTilemap tmp10 = ::flixel::tile::FlxTilemap_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(78)
		this->_level_walls = tmp10;
		HX_STACK_LINE(80)
		::flixel::tile::FlxTilemap tmp11 = this->_level_walls;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(80)
		::String tmp12 = ::flixel::util::FlxStringUtil_obj::arrayToCSV(level_data_wall,(int)57,null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(80)
		::String tmp13 = _tileset_path1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(80)
		int tmp14 = ::PlayState_obj::TILE_WIDTH;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(80)
		int tmp15 = ::PlayState_obj::TILE_HEIGHT;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(80)
		tmp11->loadMapFromCSV(tmp12,tmp13,tmp14,tmp15,::flixel::tile::FlxTilemapAutoTiling_obj::AUTO,null(),null(),null());
		HX_STACK_LINE(81)
		::flixel::tile::FlxTilemap tmp16 = this->_level_walls;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(81)
		this->add(tmp16);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,setLevel,(void))

Void PlayState_obj::setCamera( ){
{
		HX_STACK_FRAME("PlayState","setCamera",0x53867f96,"PlayState.setCamera","PlayState.hx",85,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		::Player tmp1 = this->_player;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		tmp->follow(tmp1,::flixel::FlxCameraFollowStyle_obj::PLATFORMER,null());
		HX_STACK_LINE(87)
		::flixel::FlxCamera tmp2 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		::flixel::tile::FlxTilemap tmp3 = this->_level_base;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(87)
		Float tmp4 = tmp3->get_width();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(87)
		::flixel::tile::FlxTilemap tmp5 = this->_level_base;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(87)
		Float tmp6 = tmp5->get_height();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(87)
		tmp2->setScrollBoundsRect((int)0,(int)0,tmp4,tmp6,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,setCamera,(void))

Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",91,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(92)
		this->super::destroy();
		HX_STACK_LINE(93)
		::Player tmp = this->_player;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		::Player tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		this->_player = tmp1;
		HX_STACK_LINE(94)
		::flixel::tile::FlxTilemap tmp2 = this->_level_base;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		::flixel::tile::FlxTilemap tmp3 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		this->_level_base = tmp3;
		HX_STACK_LINE(95)
		::flixel::tile::FlxTilemap tmp4 = this->_level_walls;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(95)
		::flixel::tile::FlxTilemap tmp5 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(95)
		this->_level_walls = tmp5;
	}
return null();
}


int PlayState_obj::TILE_WIDTH;

int PlayState_obj::TILE_HEIGHT;


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(_player,"_player");
	HX_MARK_MEMBER_NAME(_level_base,"_level_base");
	HX_MARK_MEMBER_NAME(_level_walls,"_level_walls");
	HX_MARK_MEMBER_NAME(_curtain,"_curtain");
	::BaseState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_player,"_player");
	HX_VISIT_MEMBER_NAME(_level_base,"_level_base");
	HX_VISIT_MEMBER_NAME(_level_walls,"_level_walls");
	HX_VISIT_MEMBER_NAME(_curtain,"_curtain");
	::BaseState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { return _player; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_curtain") ) { return _curtain; }
		if (HX_FIELD_EQ(inName,"setLevel") ) { return setLevel_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setPlayer") ) { return setPlayer_dyn(); }
		if (HX_FIELD_EQ(inName,"setCamera") ) { return setCamera_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_level_base") ) { return _level_base; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_level_walls") ) { return _level_walls; }
	}
	return super::__Field(inName,inCallProp);
}

bool PlayState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"TILE_WIDTH") ) { outValue = TILE_WIDTH; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TILE_HEIGHT") ) { outValue = TILE_HEIGHT; return true;  }
	}
	return false;
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { _player=inValue.Cast< ::Player >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_curtain") ) { _curtain=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_level_base") ) { _level_base=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_level_walls") ) { _level_walls=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PlayState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"TILE_WIDTH") ) { TILE_WIDTH=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TILE_HEIGHT") ) { TILE_HEIGHT=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_player","\x00","\xfd","\x2f","\xa6"));
	outFields->push(HX_HCSTRING("_level_base","\x0b","\x3d","\x18","\x13"));
	outFields->push(HX_HCSTRING("_level_walls","\xef","\x11","\x82","\xb9"));
	outFields->push(HX_HCSTRING("_curtain","\x93","\x55","\xeb","\x06"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Player*/ ,(int)offsetof(PlayState_obj,_player),HX_HCSTRING("_player","\x00","\xfd","\x2f","\xa6")},
	{hx::fsObject /*::flixel::tile::FlxTilemap*/ ,(int)offsetof(PlayState_obj,_level_base),HX_HCSTRING("_level_base","\x0b","\x3d","\x18","\x13")},
	{hx::fsObject /*::flixel::tile::FlxTilemap*/ ,(int)offsetof(PlayState_obj,_level_walls),HX_HCSTRING("_level_walls","\xef","\x11","\x82","\xb9")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,_curtain),HX_HCSTRING("_curtain","\x93","\x55","\xeb","\x06")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &PlayState_obj::TILE_WIDTH,HX_HCSTRING("TILE_WIDTH","\xd5","\x5e","\xc1","\xb3")},
	{hx::fsInt,(void *) &PlayState_obj::TILE_HEIGHT,HX_HCSTRING("TILE_HEIGHT","\x18","\x14","\xc1","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_player","\x00","\xfd","\x2f","\xa6"),
	HX_HCSTRING("_level_base","\x0b","\x3d","\x18","\x13"),
	HX_HCSTRING("_level_walls","\xef","\x11","\x82","\xb9"),
	HX_HCSTRING("_curtain","\x93","\x55","\xeb","\x06"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("setPlayer","\xa3","\x60","\x60","\x97"),
	HX_HCSTRING("setLevel","\x82","\x7e","\x97","\x80"),
	HX_HCSTRING("setCamera","\xe7","\xbb","\x33","\x17"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PlayState_obj::TILE_WIDTH,"TILE_WIDTH");
	HX_MARK_MEMBER_NAME(PlayState_obj::TILE_HEIGHT,"TILE_HEIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PlayState_obj::TILE_WIDTH,"TILE_WIDTH");
	HX_VISIT_MEMBER_NAME(PlayState_obj::TILE_HEIGHT,"TILE_HEIGHT");
};

#endif

hx::Class PlayState_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TILE_WIDTH","\xd5","\x5e","\xc1","\xb3"),
	HX_HCSTRING("TILE_HEIGHT","\x18","\x14","\xc1","\x4b"),
	::String(null()) };

void PlayState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PlayState_obj::__GetStatic;
	__mClass->mSetStaticField = &PlayState_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayState_obj >;
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

void PlayState_obj::__boot()
{
	TILE_WIDTH= (int)16;
	TILE_HEIGHT= (int)16;
}


#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

Void Player_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",12,0xa27fc9dd)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(20)
	this->_drag = (int)1000;
	HX_STACK_LINE(19)
	this->_maxAcceleration = (int)1000;
	HX_STACK_LINE(18)
	this->_jumpForce = (int)420;
	HX_STACK_LINE(17)
	this->_maxFallSpeed = (int)800;
	HX_STACK_LINE(16)
	this->_gravity = (int)1600;
	HX_STACK_LINE(15)
	this->_maxRunSpeed = (int)200;
	HX_STACK_LINE(14)
	this->_maxWalkSpeed = (int)140;
	HX_STACK_LINE(28)
	Float tmp = (X * (int)16);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	Float tmp1 = (Y * (int)16);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	Float tmp2 = (tmp1 - (int)52);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	super::__construct(tmp,tmp2,null());
	HX_STACK_LINE(29)
	this->loadGraphic(HX_HCSTRING("assets/images/sanji.png","\x8f","\xb0","\x3e","\xea"),true,(int)47,(int)52,null(),null());
	HX_STACK_LINE(30)
	this->setSize((int)47,(int)47);
	HX_STACK_LINE(33)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	tmp3->add(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),Array_obj< int >::__new().Add((int)0),null(),null(),null(),null());
	HX_STACK_LINE(34)
	::flixel::animation::FlxAnimationController tmp4 = this->animation;		HX_STACK_VAR(tmp4,"tmp4");
	struct _Function_1_1{
		inline static Array< int > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",34,0xa27fc9dd)
			{
				HX_STACK_LINE(34)
				Array< int > _g = Array_obj< int >::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(34)
				{
					HX_STACK_LINE(34)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(34)
					while((true)){
						HX_STACK_LINE(34)
						bool tmp5 = (_g1 < (int)8);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(34)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(34)
						if ((tmp6)){
							HX_STACK_LINE(34)
							break;
						}
						HX_STACK_LINE(34)
						int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(34)
						int i = tmp7;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(34)
						int tmp8 = (i + (int)3);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(34)
						_g->push(tmp8);
					}
				}
				HX_STACK_LINE(34)
				return _g;
			}
			return null();
		}
	};
	HX_STACK_LINE(34)
	tmp4->add(HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),_Function_1_1::Block(),(int)12,null(),null(),null());
	HX_STACK_LINE(36)
	::flixel::animation::FlxAnimationController tmp5 = this->animation;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(36)
	tmp5->add(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),Array_obj< int >::__new().Add((int)1).Add((int)2),(int)3,null(),null(),null());
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::haxe::ds::IntMap tmp6 = this->_facingFlip;		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",41,0xa27fc9dd)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , true,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(41)
		Dynamic tmp7 = _Function_2_1::Block();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(41)
		tmp6->set((int)1,tmp7);
	}
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		::haxe::ds::IntMap tmp6 = this->_facingFlip;		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",42,0xa27fc9dd)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , false,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(42)
		Dynamic tmp7 = _Function_2_1::Block();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(42)
		tmp6->set((int)16,tmp7);
	}
	HX_STACK_LINE(44)
	::flixel::math::FlxPoint tmp6 = this->maxVelocity;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(44)
	int tmp7 = this->_maxFallSpeed;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(44)
	tmp6->set_y(tmp7);
	HX_STACK_LINE(45)
	::flixel::math::FlxPoint tmp8 = this->acceleration;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(45)
	int tmp9 = this->_gravity;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(45)
	tmp8->set_y(tmp9);
	HX_STACK_LINE(46)
	::flixel::math::FlxPoint tmp10 = this->drag;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(46)
	int tmp11 = this->_drag;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(46)
	tmp10->set_x(tmp11);
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(__o_X,__o_Y);
	return _result_;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Player_obj::update( Float elapsed){
{
		HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",51,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(52)
		this->controls();
		HX_STACK_LINE(53)
		this->animate();
		HX_STACK_LINE(54)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		this->super::update(tmp);
	}
return null();
}


Void Player_obj::controls( ){
{
		HX_STACK_FRAME("Player","controls",0xc9328d03,"Player.controls","Player.hx",58,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		Float xForce = (int)0;		HX_STACK_VAR(xForce,"xForce");
		HX_STACK_LINE(60)
		bool running = false;		HX_STACK_VAR(running,"running");
		HX_STACK_LINE(61)
		bool jumping = false;		HX_STACK_VAR(jumping,"jumping");
		HX_STACK_LINE(63)
		bool tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(63)
			{
				HX_STACK_LINE(63)
				::String s = HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32");		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(63)
				::String tmp2 = s.toUpperCase();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(63)
				s = tmp2;
				HX_STACK_LINE(63)
				::haxe::ds::StringMap tmp3 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(63)
				::String tmp4 = s;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(63)
				bool tmp5 = tmp3->exists(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(63)
				if ((tmp5)){
					HX_STACK_LINE(63)
					::haxe::ds::StringMap tmp6 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(63)
					::String tmp7 = s;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(63)
					Dynamic tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(63)
					tmp1 = tmp8;
				}
				else{
					HX_STACK_LINE(63)
					tmp1 = (int)-1;
				}
			}
			HX_STACK_LINE(63)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(63)
			{
				HX_STACK_LINE(63)
				::String s = HX_HCSTRING("A","\x41","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(63)
				::String tmp3 = s.toUpperCase();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(63)
				s = tmp3;
				HX_STACK_LINE(63)
				::haxe::ds::StringMap tmp4 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(63)
				::String tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(63)
				bool tmp6 = tmp4->exists(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(63)
				if ((tmp6)){
					HX_STACK_LINE(63)
					::haxe::ds::StringMap tmp7 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(63)
					::String tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(63)
					Dynamic tmp9 = tmp7->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(63)
					tmp2 = tmp9;
				}
				else{
					HX_STACK_LINE(63)
					tmp2 = (int)-1;
				}
			}
			HX_STACK_LINE(63)
			Array< int > KeyArray = Array_obj< int >::__new().Add(tmp1).Add(tmp2);		HX_STACK_VAR(KeyArray,"KeyArray");
			HX_STACK_LINE(63)
			::flixel::input::keyboard::FlxKeyboard tmp3 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(63)
			tmp = tmp3->checkKeyArrayState(KeyArray,(int)1);
		}
		HX_STACK_LINE(63)
		if ((tmp)){
			HX_STACK_LINE(63)
			(xForce)--;
		}
		HX_STACK_LINE(64)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				::String s = HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67");		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(64)
				::String tmp3 = s.toUpperCase();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(64)
				s = tmp3;
				HX_STACK_LINE(64)
				::haxe::ds::StringMap tmp4 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(64)
				::String tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(64)
				bool tmp6 = tmp4->exists(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(64)
				if ((tmp6)){
					HX_STACK_LINE(64)
					::haxe::ds::StringMap tmp7 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(64)
					::String tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(64)
					Dynamic tmp9 = tmp7->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(64)
					tmp2 = tmp9;
				}
				else{
					HX_STACK_LINE(64)
					tmp2 = (int)-1;
				}
			}
			HX_STACK_LINE(64)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				::String s = HX_HCSTRING("D","\x44","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(64)
				::String tmp4 = s.toUpperCase();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(64)
				s = tmp4;
				HX_STACK_LINE(64)
				::haxe::ds::StringMap tmp5 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(64)
				::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(64)
				bool tmp7 = tmp5->exists(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(64)
				if ((tmp7)){
					HX_STACK_LINE(64)
					::haxe::ds::StringMap tmp8 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(64)
					::String tmp9 = s;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(64)
					Dynamic tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(64)
					tmp3 = tmp10;
				}
				else{
					HX_STACK_LINE(64)
					tmp3 = (int)-1;
				}
			}
			HX_STACK_LINE(64)
			Array< int > KeyArray = Array_obj< int >::__new().Add(tmp2).Add(tmp3);		HX_STACK_VAR(KeyArray,"KeyArray");
			HX_STACK_LINE(64)
			::flixel::input::keyboard::FlxKeyboard tmp4 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(64)
			tmp1 = tmp4->checkKeyArrayState(KeyArray,(int)1);
		}
		HX_STACK_LINE(64)
		if ((tmp1)){
			HX_STACK_LINE(64)
			(xForce)++;
		}
		HX_STACK_LINE(65)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(65)
			{
				HX_STACK_LINE(65)
				::String s = HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff");		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(65)
				::String tmp4 = s.toUpperCase();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(65)
				s = tmp4;
				HX_STACK_LINE(65)
				::haxe::ds::StringMap tmp5 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(65)
				::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(65)
				bool tmp7 = tmp5->exists(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(65)
				if ((tmp7)){
					HX_STACK_LINE(65)
					::haxe::ds::StringMap tmp8 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(65)
					::String tmp9 = s;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(65)
					Dynamic tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(65)
					tmp3 = tmp10;
				}
				else{
					HX_STACK_LINE(65)
					tmp3 = (int)-1;
				}
			}
			HX_STACK_LINE(65)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(65)
			{
				HX_STACK_LINE(65)
				::String s = HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00");		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(65)
				::String tmp5 = s.toUpperCase();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(65)
				s = tmp5;
				HX_STACK_LINE(65)
				::haxe::ds::StringMap tmp6 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(65)
				::String tmp7 = s;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(65)
				bool tmp8 = tmp6->exists(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(65)
				if ((tmp8)){
					HX_STACK_LINE(65)
					::haxe::ds::StringMap tmp9 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(65)
					::String tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(65)
					Dynamic tmp11 = tmp9->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(65)
					tmp4 = tmp11;
				}
				else{
					HX_STACK_LINE(65)
					tmp4 = (int)-1;
				}
			}
			HX_STACK_LINE(65)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(65)
			{
				HX_STACK_LINE(65)
				::String s = HX_HCSTRING("W","\x57","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(65)
				::String tmp6 = s.toUpperCase();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(65)
				s = tmp6;
				HX_STACK_LINE(65)
				::haxe::ds::StringMap tmp7 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(65)
				::String tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(65)
				bool tmp9 = tmp7->exists(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(65)
				if ((tmp9)){
					HX_STACK_LINE(65)
					::haxe::ds::StringMap tmp10 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(65)
					::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(65)
					Dynamic tmp12 = tmp10->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(65)
					tmp5 = tmp12;
				}
				else{
					HX_STACK_LINE(65)
					tmp5 = (int)-1;
				}
			}
			HX_STACK_LINE(65)
			int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(65)
			{
				HX_STACK_LINE(65)
				::String s = HX_HCSTRING("C","\x43","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(65)
				::String tmp7 = s.toUpperCase();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(65)
				s = tmp7;
				HX_STACK_LINE(65)
				::haxe::ds::StringMap tmp8 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(65)
				::String tmp9 = s;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(65)
				bool tmp10 = tmp8->exists(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(65)
				if ((tmp10)){
					HX_STACK_LINE(65)
					::haxe::ds::StringMap tmp11 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(65)
					::String tmp12 = s;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(65)
					Dynamic tmp13 = tmp11->get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(65)
					tmp6 = tmp13;
				}
				else{
					HX_STACK_LINE(65)
					tmp6 = (int)-1;
				}
			}
			HX_STACK_LINE(65)
			Array< int > KeyArray = Array_obj< int >::__new().Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6);		HX_STACK_VAR(KeyArray,"KeyArray");
			HX_STACK_LINE(65)
			::flixel::input::keyboard::FlxKeyboard tmp7 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(65)
			tmp2 = tmp7->checkKeyArrayState(KeyArray,(int)2);
		}
		HX_STACK_LINE(65)
		if ((tmp2)){
			HX_STACK_LINE(65)
			jumping = true;
		}
		HX_STACK_LINE(66)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			{
				HX_STACK_LINE(66)
				::String s = HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff");		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(66)
				::String tmp5 = s.toUpperCase();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(66)
				s = tmp5;
				HX_STACK_LINE(66)
				::haxe::ds::StringMap tmp6 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(66)
				::String tmp7 = s;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(66)
				bool tmp8 = tmp6->exists(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(66)
				if ((tmp8)){
					HX_STACK_LINE(66)
					::haxe::ds::StringMap tmp9 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(66)
					::String tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(66)
					Dynamic tmp11 = tmp9->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(66)
					tmp4 = tmp11;
				}
				else{
					HX_STACK_LINE(66)
					tmp4 = (int)-1;
				}
			}
			HX_STACK_LINE(66)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(66)
			{
				HX_STACK_LINE(66)
				::String s = HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00");		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(66)
				::String tmp6 = s.toUpperCase();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(66)
				s = tmp6;
				HX_STACK_LINE(66)
				::haxe::ds::StringMap tmp7 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(66)
				::String tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(66)
				bool tmp9 = tmp7->exists(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(66)
				if ((tmp9)){
					HX_STACK_LINE(66)
					::haxe::ds::StringMap tmp10 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(66)
					::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(66)
					Dynamic tmp12 = tmp10->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(66)
					tmp5 = tmp12;
				}
				else{
					HX_STACK_LINE(66)
					tmp5 = (int)-1;
				}
			}
			HX_STACK_LINE(66)
			int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(66)
			{
				HX_STACK_LINE(66)
				::String s = HX_HCSTRING("W","\x57","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(66)
				::String tmp7 = s.toUpperCase();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(66)
				s = tmp7;
				HX_STACK_LINE(66)
				::haxe::ds::StringMap tmp8 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(66)
				::String tmp9 = s;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(66)
				bool tmp10 = tmp8->exists(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(66)
				if ((tmp10)){
					HX_STACK_LINE(66)
					::haxe::ds::StringMap tmp11 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(66)
					::String tmp12 = s;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(66)
					Dynamic tmp13 = tmp11->get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(66)
					tmp6 = tmp13;
				}
				else{
					HX_STACK_LINE(66)
					tmp6 = (int)-1;
				}
			}
			HX_STACK_LINE(66)
			int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(66)
			{
				HX_STACK_LINE(66)
				::String s = HX_HCSTRING("C","\x43","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(66)
				::String tmp8 = s.toUpperCase();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(66)
				s = tmp8;
				HX_STACK_LINE(66)
				::haxe::ds::StringMap tmp9 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(66)
				::String tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(66)
				bool tmp11 = tmp9->exists(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(66)
				if ((tmp11)){
					HX_STACK_LINE(66)
					::haxe::ds::StringMap tmp12 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(66)
					::String tmp13 = s;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(66)
					Dynamic tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(66)
					tmp7 = tmp14;
				}
				else{
					HX_STACK_LINE(66)
					tmp7 = (int)-1;
				}
			}
			HX_STACK_LINE(66)
			Array< int > KeyArray = Array_obj< int >::__new().Add(tmp4).Add(tmp5).Add(tmp6).Add(tmp7);		HX_STACK_VAR(KeyArray,"KeyArray");
			HX_STACK_LINE(66)
			::flixel::input::keyboard::FlxKeyboard tmp8 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(66)
			tmp3 = tmp8->checkKeyArrayState(KeyArray,(int)-1);
		}
		HX_STACK_LINE(66)
		if ((tmp3)){
			HX_STACK_LINE(66)
			::flixel::math::FlxPoint tmp4 = this->velocity;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			::flixel::math::FlxPoint tmp5 = this->velocity;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(66)
			Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(66)
			Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(66)
			tmp4->set_y(tmp7);
		}
		HX_STACK_LINE(67)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				::String s = HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa");		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(67)
				::String tmp6 = s.toUpperCase();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(67)
				s = tmp6;
				HX_STACK_LINE(67)
				::haxe::ds::StringMap tmp7 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(67)
				::String tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(67)
				bool tmp9 = tmp7->exists(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(67)
				if ((tmp9)){
					HX_STACK_LINE(67)
					::haxe::ds::StringMap tmp10 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(67)
					::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(67)
					Dynamic tmp12 = tmp10->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(67)
					tmp5 = tmp12;
				}
				else{
					HX_STACK_LINE(67)
					tmp5 = (int)-1;
				}
			}
			HX_STACK_LINE(67)
			int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				::String s = HX_HCSTRING("X","\x58","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(67)
				::String tmp7 = s.toUpperCase();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(67)
				s = tmp7;
				HX_STACK_LINE(67)
				::haxe::ds::StringMap tmp8 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(67)
				::String tmp9 = s;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(67)
				bool tmp10 = tmp8->exists(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(67)
				if ((tmp10)){
					HX_STACK_LINE(67)
					::haxe::ds::StringMap tmp11 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(67)
					::String tmp12 = s;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(67)
					Dynamic tmp13 = tmp11->get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(67)
					tmp6 = tmp13;
				}
				else{
					HX_STACK_LINE(67)
					tmp6 = (int)-1;
				}
			}
			HX_STACK_LINE(67)
			Array< int > KeyArray = Array_obj< int >::__new().Add(tmp5).Add(tmp6);		HX_STACK_VAR(KeyArray,"KeyArray");
			HX_STACK_LINE(67)
			::flixel::input::keyboard::FlxKeyboard tmp7 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(67)
			tmp4 = tmp7->checkKeyArrayState(KeyArray,(int)1);
		}
		HX_STACK_LINE(67)
		if ((tmp4)){
			HX_STACK_LINE(67)
			running = true;
		}
		HX_STACK_LINE(69)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			bool tmp6 = true;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(69)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(69)
			if ((tmp6)){
				HX_STACK_LINE(69)
				tmp7 = (xForce < (int)-1);
			}
			else{
				HX_STACK_LINE(69)
				tmp7 = false;
			}
			HX_STACK_LINE(69)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(69)
			if ((tmp7)){
				HX_STACK_LINE(69)
				tmp8 = (int)-1;
			}
			else{
				HX_STACK_LINE(69)
				tmp8 = xForce;
			}
			HX_STACK_LINE(69)
			Float lowerBound = tmp8;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(69)
			bool tmp9 = true;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(69)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(69)
			if ((tmp9)){
				HX_STACK_LINE(69)
				tmp10 = (lowerBound > (int)1);
			}
			else{
				HX_STACK_LINE(69)
				tmp10 = false;
			}
			HX_STACK_LINE(69)
			if ((tmp10)){
				HX_STACK_LINE(69)
				tmp5 = (int)1;
			}
			else{
				HX_STACK_LINE(69)
				tmp5 = lowerBound;
			}
		}
		HX_STACK_LINE(69)
		xForce = ((Float)(tmp5));
		HX_STACK_LINE(71)
		bool tmp6 = running;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(71)
		if ((tmp6)){
			HX_STACK_LINE(71)
			::flixel::math::FlxPoint tmp7 = this->maxVelocity;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(71)
			int tmp8 = this->_maxRunSpeed;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(71)
			tmp7->set_x(tmp8);
		}
		else{
			HX_STACK_LINE(71)
			::flixel::math::FlxPoint tmp7 = this->maxVelocity;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(71)
			int tmp8 = this->_maxWalkSpeed;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(71)
			tmp7->set_x(tmp8);
		}
		HX_STACK_LINE(72)
		::flixel::math::FlxPoint tmp7 = this->acceleration;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(72)
		Float tmp8 = xForce;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(72)
		int tmp9 = this->_maxAcceleration;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(72)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(72)
		tmp7->set_x(tmp10);
		HX_STACK_LINE(73)
		bool tmp11 = jumping;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(73)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(73)
		if ((tmp11)){
			HX_STACK_LINE(73)
			int tmp13 = this->touching;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(73)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(73)
			int tmp15 = (int(tmp14) & int((int)4096));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(73)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(73)
			tmp12 = (tmp16 > (int)0);
		}
		else{
			HX_STACK_LINE(73)
			tmp12 = false;
		}
		HX_STACK_LINE(73)
		if ((tmp12)){
			HX_STACK_LINE(75)
			int tmp13 = this->_jumpForce;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(75)
			::flixel::math::FlxPoint tmp14 = this->velocity;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(75)
			Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(75)
			Float tmp16 = (tmp15 * ((Float)0.25));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(75)
			Float tmp17 = ::Math_obj::abs(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(75)
			Float tmp18 = (tmp13 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(75)
			Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(75)
			Float finalJumpForce = tmp19;		HX_STACK_VAR(finalJumpForce,"finalJumpForce");
			HX_STACK_LINE(76)
			::flixel::math::FlxPoint tmp20 = this->velocity;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(76)
			Float tmp21 = finalJumpForce;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(76)
			tmp20->set_y(tmp21);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,controls,(void))

Void Player_obj::animate( ){
{
		HX_STACK_FRAME("Player","animate",0xa447a4b4,"Player.animate","Player.hx",82,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		::flixel::math::FlxPoint tmp = this->acceleration;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		if ((tmp2)){
			HX_STACK_LINE(83)
			this->set_facing((int)16);
		}
		else{
			HX_STACK_LINE(84)
			::flixel::math::FlxPoint tmp3 = this->acceleration;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			bool tmp5 = (tmp4 < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			if ((tmp5)){
				HX_STACK_LINE(84)
				this->set_facing((int)1);
			}
		}
		HX_STACK_LINE(85)
		int tmp3 = this->touching;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(85)
		int tmp4 = (int(tmp3) & int((int)4096));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(85)
		bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(85)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(85)
		if ((tmp6)){
			HX_STACK_LINE(85)
			::flixel::animation::FlxAnimationController tmp7 = this->animation;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(85)
			tmp7->play(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),null(),null(),null());
		}
		else{
			HX_STACK_LINE(87)
			::flixel::math::FlxPoint tmp7 = this->velocity;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(87)
			Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(87)
			bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(87)
			if ((tmp9)){
				HX_STACK_LINE(87)
				::flixel::animation::FlxAnimationController tmp10 = this->animation;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(87)
				tmp10->play(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),null(),null(),null());
			}
			else{
				HX_STACK_LINE(90)
				::flixel::animation::FlxAnimationController tmp10 = this->animation;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(90)
				tmp10->play(HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),null(),null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,animate,(void))


Player_obj::Player_obj()
{
}

Dynamic Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_drag") ) { return _drag; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"animate") ) { return animate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_gravity") ) { return _gravity; }
		if (HX_FIELD_EQ(inName,"controls") ) { return controls_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_jumpForce") ) { return _jumpForce; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_maxRunSpeed") ) { return _maxRunSpeed; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_maxWalkSpeed") ) { return _maxWalkSpeed; }
		if (HX_FIELD_EQ(inName,"_maxFallSpeed") ) { return _maxFallSpeed; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_maxAcceleration") ) { return _maxAcceleration; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_drag") ) { _drag=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_gravity") ) { _gravity=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_jumpForce") ) { _jumpForce=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_maxRunSpeed") ) { _maxRunSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_maxWalkSpeed") ) { _maxWalkSpeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxFallSpeed") ) { _maxFallSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_maxAcceleration") ) { _maxAcceleration=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_maxWalkSpeed","\x59","\xbd","\x1b","\x9c"));
	outFields->push(HX_HCSTRING("_maxRunSpeed","\x01","\x89","\x6e","\x65"));
	outFields->push(HX_HCSTRING("_gravity","\xcf","\xc7","\xb7","\xb1"));
	outFields->push(HX_HCSTRING("_maxFallSpeed","\xa7","\x20","\x6f","\x00"));
	outFields->push(HX_HCSTRING("_jumpForce","\xde","\x39","\x04","\xec"));
	outFields->push(HX_HCSTRING("_maxAcceleration","\x85","\xff","\x5c","\x32"));
	outFields->push(HX_HCSTRING("_drag","\xd3","\x47","\x81","\xf5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Player_obj,_maxWalkSpeed),HX_HCSTRING("_maxWalkSpeed","\x59","\xbd","\x1b","\x9c")},
	{hx::fsInt,(int)offsetof(Player_obj,_maxRunSpeed),HX_HCSTRING("_maxRunSpeed","\x01","\x89","\x6e","\x65")},
	{hx::fsInt,(int)offsetof(Player_obj,_gravity),HX_HCSTRING("_gravity","\xcf","\xc7","\xb7","\xb1")},
	{hx::fsInt,(int)offsetof(Player_obj,_maxFallSpeed),HX_HCSTRING("_maxFallSpeed","\xa7","\x20","\x6f","\x00")},
	{hx::fsInt,(int)offsetof(Player_obj,_jumpForce),HX_HCSTRING("_jumpForce","\xde","\x39","\x04","\xec")},
	{hx::fsInt,(int)offsetof(Player_obj,_maxAcceleration),HX_HCSTRING("_maxAcceleration","\x85","\xff","\x5c","\x32")},
	{hx::fsInt,(int)offsetof(Player_obj,_drag),HX_HCSTRING("_drag","\xd3","\x47","\x81","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_maxWalkSpeed","\x59","\xbd","\x1b","\x9c"),
	HX_HCSTRING("_maxRunSpeed","\x01","\x89","\x6e","\x65"),
	HX_HCSTRING("_gravity","\xcf","\xc7","\xb7","\xb1"),
	HX_HCSTRING("_maxFallSpeed","\xa7","\x20","\x6f","\x00"),
	HX_HCSTRING("_jumpForce","\xde","\x39","\x04","\xec"),
	HX_HCSTRING("_maxAcceleration","\x85","\xff","\x5c","\x32"),
	HX_HCSTRING("_drag","\xd3","\x47","\x81","\xf5"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("controls","\x76","\x86","\xbc","\x37"),
	HX_HCSTRING("animate","\xa1","\xda","\x4c","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
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


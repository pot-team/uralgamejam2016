#ifndef INCLUDED_LevelData
#define INCLUDED_LevelData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(LevelData)


class HXCPP_CLASS_ATTRIBUTES  LevelData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LevelData_obj OBJ_;
		LevelData_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="LevelData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LevelData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LevelData_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("LevelData","\xae","\x89","\x05","\x1a"); }

		static void __boot();
		static Array< int > level_data;
		static Array< int > level_data_wall;
};


#endif /* INCLUDED_LevelData */ 

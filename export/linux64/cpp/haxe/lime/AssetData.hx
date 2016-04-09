package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/level_auto.txt", "assets/data/level_auto.txt");
			type.set ("assets/data/level_auto.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/gfx/ui/dark_grey.png", "assets/gfx/ui/dark_grey.png");
			type.set ("assets/gfx/ui/dark_grey.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/zoro_sprite_by_denpro-d5177ga.jpg", "assets/images/zoro_sprite_by_denpro-d5177ga.jpg");
			type.set ("assets/images/zoro_sprite_by_denpro-d5177ga.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/tileset_player.png", "assets/images/tileset_player.png");
			type.set ("assets/images/tileset_player.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/auto_tiles.png", "assets/images/auto_tiles.png");
			type.set ("assets/images/auto_tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/megha_knuckles_advance_sprite_sheet_by_tfpivman-d4qhlrb.png", "assets/images/megha_knuckles_advance_sprite_sheet_by_tfpivman-d4qhlrb.png");
			type.set ("assets/images/megha_knuckles_advance_sprite_sheet_by_tfpivman-d4qhlrb.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/sanji.png", "assets/images/sanji.png");
			type.set ("assets/images/sanji.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/tileset_grass_fall.png", "assets/images/tileset_grass_fall.png");
			type.set ("assets/images/tileset_grass_fall.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/andi.png", "assets/images/andi.png");
			type.set ("assets/images/andi.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/sanji_sprite_sheet_by_nitrothart-d4hkepe.png", "assets/images/sanji_sprite_sheet_by_nitrothart-d4hkepe.png");
			type.set ("assets/images/sanji_sprite_sheet_by_nitrothart-d4hkepe.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/olala.png", "assets/images/olala.png");
			type.set ("assets/images/olala.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/free_16x16_tileset_by_neoz7-d8gs48c.png", "assets/images/free_16x16_tileset_by_neoz7-d8gs48c.png");
			type.set ("assets/images/free_16x16_tileset_by_neoz7-d8gs48c.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/tileset_walls.png", "assets/images/tileset_walls.png");
			type.set ("assets/images/tileset_walls.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/xml/settings_state.xml", "assets/xml/settings_state.xml");
			type.set ("assets/xml/settings_state.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/xml/_ui_globals.xml", "assets/xml/_ui_globals.xml");
			type.set ("assets/xml/_ui_globals.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/xml/menu_state.xml", "assets/xml/menu_state.xml");
			type.set ("assets/xml/menu_state.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("flixel/sounds/beep.ogg", "flixel/sounds/beep.ogg");
			type.set ("flixel/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/sounds/flixel.ogg", "flixel/sounds/flixel.ogg");
			type.set ("flixel/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/fonts/nokiafc22.ttf", "flixel/fonts/nokiafc22.ttf");
			type.set ("flixel/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/fonts/monsterrat.ttf", "flixel/fonts/monsterrat.ttf");
			type.set ("flixel/fonts/monsterrat.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/images/ui/button.png", "flixel/images/ui/button.png");
			type.set ("flixel/images/ui/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData

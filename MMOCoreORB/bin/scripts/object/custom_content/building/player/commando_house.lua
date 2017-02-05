object_building_player_commando_house = object_building_player_shared_commando_house:new {
	lotSize = 2,
	baseMaintenanceRate = 80,
	allowedZones = {"corellia", "dantooine", "lok", "naboo", "rori", "talus", "tatooine", "yavin4", "dathomir", "kaas", "endor"},
	publicStructure = 0,
	constructionMarker = "object/building/player/construction/construction_player_house_corellia_large_style_01.iff",
	length = 1,
	width = 1,
	skillMods = {
		{"private_medical_rating", 100},
		{"private_buff_mind", 100},
		{"private_med_battle_fatigue", 5},
		{"private_safe_logout", 1},
		{"advanced_assembly", 20},
		{"armor_assembly", 20},
		{"general_assembly", 20},
		{"bio_engineer_assembly", 20},
		{"clothing_assembly", 20},
		{"combat_medicine_assembly", 20},
		{"droid_assembly", 20},
		{"engineering_assembly", 20},
		{"food_assembly", 20},
		{"force_assembly", 20},
		{"jedi_saber_assembly", 20},
		{"medicine_assembly", 20},
		{"structure_assembly", 20},
		{"weapon_assembly", 20},
		{"armor_experimentation", 5},
		{"general_experimentation", 5},
		{"bio_engineer_experimentation", 5},
		{"clothing_experimentation", 5},
		{"combat_medicine_experimentation", 5},
		{"creature_experimentation", 5},
		{"droid_experimentation", 5},
		{"food_experimentation", 5},
		{"force_experimentation", 5},
		{"jedi_saber_experimentation", 5},
		{"medicine_experimentation", 5},
		{"structure_experimentation", 5},
		{"tissue_experimentation", 5},
		{"weapon_experimentation", 5},
		{"armor_complexity", 50},
		{"clothing_complexity", 50},
		{"medicine_complexity", 50},
		{"droid_complexity", 50},
		{"food_complexity", 50},
		{"structure_complexity", 50},
		{"armor_customization", 50},
		{"artisan_clothing_customization", 50},
		{"clothing_customization", 50},
		{"droid_customization", 50},
		{"armor_repair", 20},
		{"clothing_repair", 20},
		{"force_repair_bonus", 20},
		{"crafting_repair", 20},
		{"weapon_repair", 20}
	},
	childObjects = {
			{templateFile = "object/tangible/terminal/terminal_player_structure.iff", x = 2.8434, z = 0.142553, y = 4.0067, ow = -4.35451e-08, ox = 3.8097e-09, oz = -0.0871558, oy = 0.996195, cellid = 1, containmentType = -1},
			{templateFile = "object/tangible/sign/player/house_address.iff", x = 3.30, z = 3.88, y = 6.19, ow = -4.36515e-08, ox = 2.28768e-09, oz = -0.06453, oy = 0.99792, cellid = -1, containmentType = -1}
	},
	shopSigns = {
			{templateFile = "object/tangible/sign/player/house_address.iff", x = 3.30, z = 3.88, y = 6.19, ow = -4.36515e-08, ox = 2.28768e-09, oz = -0.06453, oy = 0.99792, cellid = -1, containmentType = -1, requiredSkill = "", suiItem = "@player_structure:house_address"},
			{templateFile = "object/tangible/sign/player/shop_sign_s01.iff", x = 4.89, z = 0.34, y = 8.31, ow = 1, ox = 0, oz = 0, oy = 0, cellid = -1, containmentType = -1, requiredSkill = "crafting_merchant_management_01", suiItem = "@player_structure:shop_sign1"},
			{templateFile = "object/tangible/sign/player/shop_sign_s02.iff", x = 4.89, z = 0.34, y = 8.31, ow = 1, ox = 0, oz = 0, oy = 0, cellid = -1, containmentType = -1, requiredSkill = "crafting_merchant_management_02", suiItem = "@player_structure:shop_sign2"},
			{templateFile = "object/tangible/sign/player/shop_sign_s03.iff", x = 4.89, z = 0.34, y = 8.31, ow = 1, ox = 0, oz = 0, oy = 0, cellid = -1, containmentType = -1, requiredSkill = "crafting_merchant_management_03", suiItem = "@player_structure:shop_sign3"},
			{templateFile = "object/tangible/sign/player/shop_sign_s04.iff", x = 4.89, z = 0.34, y = 8.31, ow = 1, ox = 0, oz = 0, oy = 0, cellid = -1, containmentType = -1, requiredSkill = "crafting_merchant_management_04", suiItem = "@player_structure:shop_sign4"}		
	}
}

ObjectTemplates:addTemplate(object_building_player_commando_house, "object/building/player/commando_house.iff")

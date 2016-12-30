--Automatically generated by SWGEmu Spawn Tool v0.12 loot editor.

axe_heavy_duty = {
	minimumLevel = 0,
	maximumLevel = -1,
	customObjectName = "",
	directObjectTemplate = "object/weapon/melee/axe/axe_heavy_duty.iff",
	craftingValues = {
		{"mindamage",65,86,0},
		{"maxdamage",98,182,0},
		{"attackspeed",6.5,4.5,1},
		{"woundchance",11,20,0},
		{"hitpoints",750,1500,0},
		{"zerorangemod",-5,5,0},
		{"maxrangemod",-5,5,0},
		{"midrange",3,3,0},
		{"midrangemod",-5,5,0},
		{"maxrange",4,4,0},
		{"attackhealthcost",78,42,0},
		{"attackactioncost",40,22,0},
		{"attackmindcost",13,7,0},
	},
	customizationStringNames = {},
	customizationValues = {},

	-- randomDotChance: The chance of this weapon object dropping with a random dot on it. Higher number means less chance. Set to 0 to always have a random dot.
	randomDotChance = 1000,
	junkDealerTypeNeeded = JUNKARMS,
	junkMinValue = 25,
	junkMaxValue = 45

}

addLootItemTemplate("axe_heavy_duty", axe_heavy_duty)
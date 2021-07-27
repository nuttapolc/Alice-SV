// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

/**
 * Custom battle config initializations
 * Place the definition of custom battle configuration initializations in this file.
 *
 * Do not forget to add a comma at the end of the line, if you want to add another config
 *
 * Format:
 *	 { "name", &battle_config.<variable name>, <default value>, <minimum value>, <maximum value> },
 **/

 	// Edit Skill
	{ "skill_macemastery",						&battle_config.skill_macemastery,					3,		0,		INT_MAX, },
	{ "skill_demonbane",						&battle_config.skill_demonbane,					3,		0,		INT_MAX, },
	{ "skill_sonic_acceleration",						&battle_config.skill_sonic_acceleration,					10,		0,		INT_MAX, },
	// Asura Strike After Bodyrelocation
	{ "asura_after_body_relocation",		&battle_config.asura_after_body_relocation,		2000,	0,		INT_MAX         },
	// Asura Strike
	{ "asura_absorb_cast_cancel",			&battle_config.asura_absorb_cast_cancel,		1,		0,		1,				},
	{ "asura_dispell_cast_cancel",			&battle_config.asura_dispell_cast_cancel,		1,		0,		1,				},
	// Bodyrelocation
	{ "block_body_relocation_ankle",				&battle_config.block_body_relocation_ankle,			1,		0,		1,				},
	{ "block_body_relocation_spiderweb",	&battle_config.block_body_relocation_spiderweb,	1,		0,		1,				},
	// BackSlide
	{ "block_backslide_ankle",				&battle_config.block_backslide_ankle,			1,		0,		1,				},
	{ "block_backslide_spiderweb",			&battle_config.block_backslide_spiderweb,		1,		0,		1,				},
	// Automatic of Blitz Beat Damage
	{ "enable_split_blitz",					&battle_config.enable_split_blitz,				1,		0,		1,				},
	// Automatic of Blitz Beat On Bow
	{ "enable_blitzbeat_no_bow",			&battle_config.enable_blitzbeat_no_bow,			1,		0,		1,				},
	// Earth Deleter Card SP
	{ "earth_deleter_card_sp_cancel",		&battle_config.earth_deleter_card_sp_cancel,	1,		0,		1, },
	// Stop Trickdead
	{ "stop_trickdead",               &battle_config.stop_trickdead,                    1,      0,      1, },
	// Emotion Dice
	{ "enable_emotion_dice",                &battle_config.enable_emotion_dice,             1,      0,      1, },
	// Emotion Stick
	{ "enable_emotion_stick",                &battle_config.enable_emotion_stick,             1,      0,      1, },
	{ "lock_dice_char_id",					&battle_config.lock_dice_char_id,					1,     0,      INT_MAX,		},
	{ "lock_dice_low_score",               &battle_config.lock_dice_low_score,					1,     0,      100,			},

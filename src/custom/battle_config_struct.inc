// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

/**
 * Custom battle config structure
 * Place the definition of custom battle configuration structure members in this file.
 *
 * Make sure that the name you want is not already taken by looking into battle.hpp
 * Do not forget to add initilization logic to battle_config_init.inc
 *
 * Format:
 *	 <datatype> name;
 **/

 	// Edit Skill
	int	skill_macemastery;
	int	skill_demonbane;
	int	skill_sonic_acceleration;
	// Asura Strike After Bodyrelocation
	int asura_after_body_relocation;
	// Asura Strike
	int asura_absorb_cast_cancel;
	int asura_dispell_cast_cancel;
	// Bodyrelocation
	int block_body_relocation_ankle;
	int block_body_relocation_spiderweb;
	// BackSlide
	int block_backslide_ankle;
	int block_backslide_spiderweb;
	// Automatic of Blitz Beat Damage
	int enable_split_blitz;
	// Automatic of Blitz Beat On Bow
	int enable_blitzbeat_no_bow;
	//Earth Deleter Card SP
	int earth_deleter_card_sp_cancel;
	// Stop Trickdead
	int stop_trickdead;
	// Emotion Dice
	int enable_emotion_dice;
	// Emotion Stick
	int enable_emotion_stick;
	int lock_dice_char_id;
	int lock_dice_low_score;

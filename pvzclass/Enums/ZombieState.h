#pragma once

#include <string>

namespace ZombieState {
	enum ZombieState {
		WALKING = 0x0,
		DYING = 0x1,
		DYING_FROM_INSTANT_KILL = 0x2,
		DYING_FROM_LAWNMOWER = 0x3,
		BUNGEE_TARGET_DROP = 0x4,
		BUNGEE_BODY_DROP = 0x5,
		BUNGEE_IDLE_AFTER_DROP = 0x6,
		BUNGEE_GRAB = 0x7,
		BUNGEE_RAISE = 0x8,
		BUNGEE_IDLE = 0xA,
		POLE_VALUTING_RUNNING = 0xB,
		POLE_VALUTING_JUMPPING = 0xC,
		POLE_VAULTING_WALKING = 0xD,
		RISING_FROM_GROUND = 0xE,
		JACKBOX_WALKING = 0xF,
		JACKBOX_POP = 0x10,
		POGO_WITH_STICK = 0x14,
		POGO_IDLE_BEFORE_TARGET = 0x15,
		POGO_JUMP_ACROSS = 0x1B,
		NEWSPAPER_WALKING = 0x1D,
		NEWSPAPER_DESTORYED = 0x1E,
		NEWSPAPER_RUNNING = 0x1F,
		DIGGER_DIG = 0x20,
		DIGGER_DRILL = 0x21,
		DIGGER_LOST_DIG = 0x22,
		DIGGER_LANDING = 0x23,
		DIGGER_DIZZY = 0x24,
		DIGGER_WALK_RIGHT = 0x25,
		DIGGER_WALK_LEFT = 0x26,
		DANCING_MOONWALK = 0x28,
		DANCING_POINT = 0x29,
		DANCING_WAIT_SUMMONING = 0x2A,
		DANCING_SUMMONING = 0x2B,
		DANCING_WALKING = 0x2C,
		DANCING_ARMRISE1 = 0x2D,
		DANCING_ARMRISE2 = 0x2E,
		DANCING_ARMRISE3 = 0x2F,
		DANCING_ARMRISE4 = 0x30,
		DANCING_ARMRISE5 = 0x31,
		BACKUP_SPAWNING = 0x32,
		DOPHIN_WALK_WITH_DOPHIN = 0x33,
		DOPHIN_JUMP_IN_POOL = 0x34,
		DOPHIN_RIDE = 0x35,
		DOPHIN_JUMP = 0x36,
		DOPHIN_WALK_IN_POOL = 0x37,
		DOPHIN_WALK_WITHOUT_DOPHIN = 0x38,
		SNORKEL_WALKING = 0x39,
		SNORKEL_JUMP_IN_THE_POOL = 0x3A,
		SNORKEL_SWIM = 0x3B,
		SNORKEL_UP_TO_EAT = 0x3C,
		SNORKEL_EAT = 0x3D,
		SNORKEL_FINIED_EAT = 0x3E,
		CATAPULT_SHOOT = 0x43,
		CATAPULT_IDLE = 0x44,
		GARGANTUAR_THROW = 0x45,
		GARGANTUAR_SMASH = 0x46,
		IMP_FLYING = 0x47,
		IMP_LANDING = 0x48,
		BALLOON_FLYING = 0x49,
		BALLOON_FALLING = 0x4A,
		BALLOON_WALKING = 0x4B,
		LADDER_WALKING = 0x4C,
		LADDER_PLACING = 0x4D,
		YETI_ESCAPE = 0x5B,
		DIGGER_IDLE = 0x27A
	};

	std::string ToString(ZombieState state);
}
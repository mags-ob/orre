#ifndef GUARD_CONFIG_ORRE_H
#define GUARD_CONFIG_ORRE_H

// Orre tuning values. All chances are percentages (0-100).
// Nothing reads these yet; they are placeholders for upcoming systems.

// Wild Shadow Pokémon
#define ORRE_WILD_SHADOW_CHANCE             10  // Chance a wild encounter is a Shadow Pokémon.
#define ORRE_WILD_SHADOW_LEVEL_BONUS        3   // Levels added to a wild Shadow Pokémon.

// Trainer Shadow Pokémon chance, by trainer category
#define ORRE_TRAINER_SHADOW_CHANCE_ORDINARY 0   // Ordinary trainers (hikers, youngsters, etc.).
#define ORRE_TRAINER_SHADOW_CHANCE_THUG     10  // Thugs and street toughs.
#define ORRE_TRAINER_SHADOW_CHANCE_WEALTHY  25  // Wealthy trainers with access to the black market.
#define ORRE_TRAINER_SHADOW_CHANCE_CIPHER   60  // Cipher / Team Snagem members.

// Befriending wild ("guarded") Pokémon — placeholder values
#define ORRE_BEFRIEND_FLEE_CHANCE           10  // Chance per turn that a guarded Pokémon flees.
#define ORRE_BEFRIEND_TRUST_MAX             100 // Trust needed to befriend.
#define ORRE_BEFRIEND_TRUST_PER_ACTION      20  // Trust gained per successful befriending action.

#endif // GUARD_CONFIG_ORRE_H

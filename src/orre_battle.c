#include "global.h"
#include "data.h"
#include "pokemon.h"
#include "orre_battle.h"

// TRUE if the player has at least two non-egg Pokémon with HP left.
bool32 Orre_PlayerCanDoubleBattle(void)
{
    return GetMonsStateToDoubles_2() == PLAYER_HAS_TWO_USABLE_MONS;
}

// Decides whether a battle against a single trainer should be a double battle.
// Battles against two separate trainers are handled by upstream code and are always doubles.
bool32 Orre_IsTrainerDoubleBattle(u16 trainerId)
{
    bool32 wantsDouble = ORRE_TRAINER_BATTLES_ALWAYS_DOUBLE
                      || GetTrainerBattleType(trainerId) == TRAINER_BATTLE_TYPE_DOUBLES;

    if (!wantsDouble)
        return FALSE;

    if (ORRE_DOUBLES_FALLBACK_TO_SINGLE
     && (GetTrainerPartySizeFromId(trainerId) < 2 || !Orre_PlayerCanDoubleBattle()))
        return FALSE;

    return TRUE;
}

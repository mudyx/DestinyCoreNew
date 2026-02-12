/*
 * This file is part of the DestinyCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "ScriptMgr.h"
#include "PetBattle.h"
#include "PetBattleAbilityEffect.h"
#include "PlayerDefines.h"
#include "DB2Stores.h"

class PlayerScript_Battle_Pet_Training_Spell: public PlayerScript
{
public:
    PlayerScript_Battle_Pet_Training_Spell() : PlayerScript("PlayerScript_Battle_Pet_Training_Spell") { }

    void OnSpellLearned(Player* player, uint32 spellID) override
    {
        switch (spellID)
        {
            case 119467:
            case 122026:
            case 125439:
            case 125610:
            {
                if (!player->HasFlag(PLAYER_FIELD_PLAYER_FLAGS, PLAYER_FLAGS_PET_BATTLES_UNLOCKED))
                {
                    player->SetFlag(PLAYER_FIELD_PLAYER_FLAGS, PLAYER_FLAGS_PET_BATTLES_UNLOCKED);
                    player->GetSession()->SendBattlePetJournal();
                    player->GetSession()->SendBattlePetTrapLevel();
                    player->GetSession()->SendBattlePetLicenseChanged();
                }
                break;
            }
            default:
                break;
        }
    }
};

void AddSC_petbattle_abilities()
{
    new PlayerScript_Battle_Pet_Training_Spell();
}

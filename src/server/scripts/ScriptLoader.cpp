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

#include "ScriptLoader.h"

// Battlegrounds
void AddSC_battleground_seething_shore();
void AddSC_battleground_warsong();
void AddSC_battleground_kotmogu();
void AddSC_battleground_shado_pan();

// BattlePay
void AddBattlePayScripts();

// Brawlers Guild
void AddBrawlersGuildScripts();

// Commands
void AddCommandsScripts();

// Spell
void AddSpellScripts();

#ifdef SCRIPTS
void AddArgusScripts();
void AddBattlePayScripts();
void AddBrokenIslesScripts();
void AddClassHallsScripts();
void AddCustomScripts();
void AddDraenorScripts();
void AddEasternKingdomsScripts();
void AddEventsScripts();
void AddGarrisonScripts();
void AddInvasionsScripts();
void AddKalimdorScripts();
void AddMaelstromScripts();
void AddNorthrendScripts();
void AddOutdoorPvPScripts();
void AddOutlandScripts();
void AddPandariaScripts();
void AddPetBattleScripts();
void AddScenarioScripts();
void AddWorldScripts();
#endif

void AddScripts()
{
    // Battlegrounds
    AddSC_battleground_seething_shore();
    AddSC_battleground_warsong();
    AddSC_battleground_kotmogu();
    AddSC_battleground_shado_pan();

	// BattlePay
	AddBattlePayScripts();

    // Brawlers Guild
	AddBrawlersGuildScripts();

    // Commands
    AddCommandsScripts();

    // Spells
    AddSpellScripts();

#ifdef SCRIPTS
	AddArgusScripts();
	AddBattlePayScripts();
    AddBrokenIslesScripts();
	AddClassHallsScripts();
    AddCustomScripts();
	AddDraenorScripts();
	AddEasternKingdomsScripts();
	AddEventsScripts();
	AddGarrisonScripts();
	AddInvasionsScripts();
	AddKalimdorScripts();
	AddMaelstromScripts();
	AddNorthrendScripts();
	AddOutdoorPvPScripts();
	AddOutlandScripts();
	AddPandariaScripts();
	AddPetBattleScripts();
	AddScenarioScripts();
	AddWorldScripts();
#endif
}
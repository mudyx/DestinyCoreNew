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

// This is where scripts' loading functions should be declared:

// Ashran
void AddSC_AshranAreaTrigger();
void AddSC_AshranMgr();
void AddSC_AshranNPCAlliance();
void AddSC_AshranNPCHorde();
void AddSC_AshranNPCNeutral();
void AddSC_AshranQuest();
void AddSC_AshranSpells();

// Kloaka
void AddSC_Kloaka();

// Outdoor
void AddSC_outdoorpvp_hp();
void AddSC_outdoorpvp_na();
void AddSC_outdoorpvp_rg();
void AddSC_outdoorpvp_tf();
void AddSC_outdoorpvp_zm();

// The name of this function should match:
// void Add${NameOfDirectory}Scripts()
void AddOutdoorPvPScripts()
{
	// Ashran
    AddSC_AshranAreaTrigger();
	AddSC_AshranMgr();
	AddSC_AshranNPCAlliance();
	AddSC_AshranNPCHorde();
	AddSC_AshranNPCNeutral();
	AddSC_AshranQuest();
	AddSC_AshranSpells();
	
	// Kloaka
	AddSC_Kloaka();
	
	// Outdoor
	AddSC_outdoorpvp_hp();
	AddSC_outdoorpvp_na();
	AddSC_outdoorpvp_rg();
	AddSC_outdoorpvp_tf();
	AddSC_outdoorpvp_zm();
}

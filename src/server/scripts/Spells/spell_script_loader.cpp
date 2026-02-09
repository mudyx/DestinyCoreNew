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

// Demon Hunter
void AddSC_demonhunter_spell_scripts();

// Death Knight
void AddSC_deathknight_spell_scripts();

// Druid
void AddSC_druid_spell_scripts();

// Generic
void AddSC_generic_spell_scripts();

// Holiday
void AddSC_holiday_spell_scripts();

// Hunter
void AddSC_hunter_spell_scripts();

// Item
void AddSC_item_spell_scripts();

// Mage
void AddSC_mage_spell_scripts();

// Mastery
void AddSC_mastery_spell_scripts();

// Monk
void AddSC_monk_spell_scripts();

// Paladin
void AddSC_paladin_spell_scripts();

// Priest
void AddSC_priest_spell_scripts();

// Quest
void AddSC_quest_spell_scripts();

// Rogue
void AddSC_rogue_spell_scripts();

// Shaman
void AddSC_shaman_spell_scripts();

// Warlock
void AddSC_warlock_spell_scripts();

// Warrior
void AddSC_warrior_spell_scripts();

// The name of this function should match:
// void Add${NameOfDirectory}Scripts()
void AddSpellScripts()
{
	// Demon Hunter
    AddSC_demonhunter_spell_scripts();
	
	// Death Knight
	AddSC_deathknight_spell_scripts();
	
	// Druid
	AddSC_druid_spell_scripts();
	
	// Generic
	AddSC_generic_spell_scripts();
	
	// Holiday
	AddSC_holiday_spell_scripts();
	
	// Hunter
	AddSC_hunter_spell_scripts();
	
	// Item
	AddSC_item_spell_scripts();
	
	// Mage
	AddSC_mage_spell_scripts();
	
	// Mastery
	AddSC_mastery_spell_scripts();
	
	// Monk
	AddSC_monk_spell_scripts();
	
	// Paladin
	AddSC_paladin_spell_scripts();
	
	// Priest
	AddSC_priest_spell_scripts();
	
	// Quest
	AddSC_quest_spell_scripts();
	
	// Rogue
	AddSC_rogue_spell_scripts();
	
	// Shaman
	AddSC_shaman_spell_scripts();
	
	// Warlock
	AddSC_warlock_spell_scripts();
	
	// Warrior
	AddSC_warrior_spell_scripts();	
}

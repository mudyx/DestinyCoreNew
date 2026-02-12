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

// World
// Achievement
void AddSC_achievement_scripts();

// Areatrigger
void AddSC_areatrigger_scripts();

// Boss Emerald Dragons
void AddSC_emerald_dragons();

// Challenge
void AddSC_challenge_scripts();

// Chat
void AddSC_chat_log();

// Custom Events
void AddSC_custom_events();

// Fireworks Spectacular
void AddSC_fireworks_spectacular();

// Go Scripts
void AddSC_go_scripts();

// Guards
void AddSC_guards();

// Item 
void AddSC_item_scripts();

// Mob generic creature
void AddSC_generic_creature();

// Npc Innkeeper
void AddSC_npc_innkeeper();

// Npc Professions
void AddSC_npc_professions();

// Npc Taxi
void AddSC_npc_taxi();

// Npcs Special
void AddSC_npcs_special();

// Player Special
void AddSC_player_special_scripts();

// Quest Scripts
void AddSC_quest_scripts();

// Scene Scripts
void AddSC_scene_scripts();

// Server Mail
void AddSC_server_mail();

// The name of this function should match:
// void Add${NameOfDirectory}Scripts()
void AddWorldScripts()
{
    // World
	// Achievement
	AddSC_achievement_scripts();
	
	// Areatrigger
	AddSC_areatrigger_scripts();
	
	// Boss Emerald Dragons
	AddSC_emerald_dragons();
	
	// Challenge
	AddSC_challenge_scripts();
	
	// Chat
	AddSC_chat_log();
	
	// Custom Events
	AddSC_custom_events();
	
	// Fireworks Spectacular
	AddSC_fireworks_spectacular();
	
	// Go Scripts
	AddSC_go_scripts();
	
	// Guards
	AddSC_guards();
	
	// Item 
	AddSC_item_scripts();
	
	// Mob generic creature
	AddSC_generic_creature();
	
	// Npc Innkeeper
	AddSC_npc_innkeeper();
	
	// Npc Professions
	AddSC_npc_professions();
	
	// Npc Taxi
	AddSC_npc_taxi();
	
	// Npcs Special
	AddSC_npcs_special();
	
	// Player Special
	AddSC_player_special_scripts();
	
	// Quest Scripts
	AddSC_quest_scripts();
	
	// Scene Scripts
	AddSC_scene_scripts();

	// Server Mail
	AddSC_server_mail();
}

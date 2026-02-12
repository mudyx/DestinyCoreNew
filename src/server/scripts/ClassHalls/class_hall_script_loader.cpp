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

// Class Halls
void AddSC_class_hall_dh();
void AddSC_class_hall_dk();
void AddSC_class_hall_druid();
void AddSC_class_hall_hunter();
void AddSC_class_hall_mage();
void AddSC_class_hall_monk();
void AddSC_class_hall_paladin();
void AddSC_class_hall_priest();
void AddSC_class_hall_rogue();
void AddSC_class_hall_shaman();
void AddSC_class_hall_warlock();
void AddSC_class_hall_warrior();

// The name of this function should match:
// void Add${NameOfDirectory}Scripts()
void AddClassHallsScripts()
{
	// Class Halls
	AddSC_class_hall_dh();
	AddSC_class_hall_dk();
	AddSC_class_hall_druid();
	AddSC_class_hall_hunter();
	AddSC_class_hall_mage();
	AddSC_class_hall_monk();
	AddSC_class_hall_paladin();
	AddSC_class_hall_priest();
	AddSC_class_hall_rogue();
	AddSC_class_hall_shaman();
	AddSC_class_hall_warlock();
	AddSC_class_hall_warrior();
}
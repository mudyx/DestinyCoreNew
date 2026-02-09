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

// BattlePay
void AddSC_BattlePay_Professions();
void AddSC_BattlePay_Services();


// The name of this function should match:
// void Add${NameOfDirectory}Scripts()
void AddBattlePayScripts()
{
    // BattlePay
	AddSC_BattlePay_Professions();
	AddSC_BattlePay_Services();
}

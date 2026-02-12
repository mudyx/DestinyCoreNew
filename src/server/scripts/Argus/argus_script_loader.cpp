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

// Antours the Burning Throne
void AddSC_antorus();
void AddSC_boss_aggramar();
void AddSC_boss_antoran();
void AddSC_boss_argus();
void AddSC_boss_coven_shivarres();
void AddSC_boss_eonar();
void AddSC_boss_felhounds();
void AddSC_boss_hasabel();
void AddSC_boss_imonar();
void AddSC_boss_kingaroth();
void AddSC_boss_varimathras();
void AddSC_boss_worldbreaker();
void AddSC_instance_antorus();

// The Seat of the Triumvirate
void AddSC_boss_lura();
void AddSC_boss_saprish();
void AddSC_boss_viceroy_nezhar();
void AddSC_boss_zuraal_the_ascended();
void AddSC_instance_seat_of_the_triumvirate();

// misc
void Addsc_paraxis();

// Zones
void AddSC_zone_antoran_wastes();
void AddSC_zone_krokuun();
void AddSC_zone_macaree();

// The name of this function should match:
// void Add${NameOfDirectory}Scripts()
void AddArgusScripts()
{
	// Antours the Burning Throne
	AddSC_antorus();
	AddSC_boss_aggramar();
	AddSC_boss_antoran();
	AddSC_boss_argus();
	AddSC_boss_coven_shivarres();
	AddSC_boss_eonar();
	AddSC_boss_felhounds();
	AddSC_boss_hasabel();
	AddSC_boss_imonar();
	AddSC_boss_kingaroth();
	AddSC_boss_varimathras();
	AddSC_boss_worldbreaker();
	AddSC_instance_antorus();	
	
	// The Seat of the Triumvirate
	AddSC_boss_lura();
	AddSC_boss_saprish();
	AddSC_boss_viceroy_nezhar();
	AddSC_boss_zuraal_the_ascended();
	AddSC_instance_seat_of_the_triumvirate();
	
	// misc
	Addsc_paraxis();

	// Zones
	AddSC_zone_antoran_wastes();
	AddSC_zone_krokuun();
	AddSC_zone_macaree();
}

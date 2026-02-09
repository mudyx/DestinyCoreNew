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

// Outland
// Auchindoun - Auchenai Crypts
void AddSC_boss_exarch_maladaar();
void AddSC_boss_shirrak_the_dead_watcher();

// Auchindoun - Mana Tombs
void AddSC_boss_nexusprince_shaffar();
void AddSC_boss_pandemonius();

// Auchindoun - Sethekk Halls
void AddSC_boss_darkweaver_syth();
void AddSC_boss_talon_king_ikiss();
void AddSC_instance_sethekk_halls();

// Auchindoun - Shadow Labyrinth
void AddSC_boss_ambassador_hellmaw();
void AddSC_boss_blackheart_the_inciter();
void AddSC_boss_grandmaster_vorpil();
void AddSC_boss_murmur();
void AddSC_instance_shadow_labyrinth();

// Black Temple
void AddSC_black_temple();
void AddSC_boss_gurtogg_bloodboil();
void AddSC_boss_illidan();
void AddSC_boss_mother_shahraz();
void AddSC_boss_reliquary_of_souls();
void AddSC_boss_shade_of_akama();
void AddSC_boss_supremus();
void AddSC_boss_teron_gorefiend();
void AddSC_boss_najentus();
void AddSC_boss_illidari_council();
void AddSC_instance_black_temple();

// Coilfang Reservoir - Serpent Shrine
void AddSC_boss_fathomlord_karathress();
void AddSC_boss_hydross_the_unstable();
void AddSC_boss_lady_vashj();
void AddSC_boss_leotheras_the_blind();
void AddSC_boss_the_lurker_below();
void AddSC_boss_morogrim_tidewalker();
void AddSC_instance_serpentshrine_cavern();

// Coilfang Reservoir - Steam Vault
void AddSC_boss_hydromancer_thespia();
void AddSC_boss_mekgineer_steamrigger();
void AddSC_boss_warlord_kalithresh();
void AddSC_instance_steam_vault();

// Coilfang Reservoir - The Slave Pens
void AddSC_boss_ahune_frost_lord();
void AddSC_instance_the_slave_pens();
void AddSC_the_slave_pens();

// Coilfang Reservoir - Underbog
void AddSC_boss_hungarfen();
void AddSC_boss_the_black_stalker();

// Gruuls Lair
void AddSC_boss_gruul();
void AddSC_boss_high_king_maulgar();
void AddSC_instance_gruuls_lair();

// Hellfire Citatel - Blood Furnace
void AddSC_boss_broggok();
void AddSC_boss_kelidan_the_breaker();
void AddSC_boss_the_maker();
void AddSC_instance_blood_furnace();

// Hellfire Citatel - Hellfire Ramparts
void AddSC_boss_omor_the_unscarred();
void AddSC_boss_vazruden_the_herald();
void AddSC_boss_watchkeeper_gargolmar();
void AddSC_instance_ramparts();

// Hellfire Citatel - Magtheridons Lair
void AddSC_boss_magtheridon();
void AddSC_instance_magtheridons_lair();

// Hellfire Citatel - Shattered Halls
void AddSC_boss_grand_warlock_nethekurse();
void AddSC_boss_warbringer_omrogg();
void AddSC_boss_warchief_kargath_bladefist();
void AddSC_instance_shattered_halls();

// Tempest Keep - Arcatraz
void AddSC_arcatraz();
void AddSC_boss_dalliah_the_doomsayer();
void AddSC_boss_harbinger_skyriss();
void AddSC_boss_wrath_scryer_soccothrates();
void AddSC_boss_zereketh_the_unbound();
void AddSC_instance_arcatraz();

// Tempest Keep - Botanica
void AddSC_boss_high_botanist_freywinn();
void AddSC_boss_laj();
void AddSC_boss_warp_splinter();

// Tempest Keep - Eye
void AddSC_boss_alar();
void AddSC_boss_high_astromancer_solarian();
void AddSC_boss_kaelthas();
void AddSC_boss_void_reaver();
void AddSC_instance_the_eye();
void AddSC_the_eye();

// Tempest Keep - Mechanar
void AddSC_boss_gatewatcher_gyrokill();
void AddSC_boss_gatewatcher_iron_hand();
void AddSC_boss_mechano_lord_capacitus();
void AddSC_boss_nethermancer_sepethrea();
void AddSC_boss_pathaleon_the_calculator();
void AddSC_instance_mechanar();

// World Boss
void AddSC_boss_doomlordkazzak();
void AddSC_boss_doomwalker();

// Zones
void AddSC_blades_edge_mountains();
void AddSC_hellfire_peninsula();
void AddSC_nagrand();
void AddSC_netherstorm();
void AddSC_shadowmoon_valley();
void AddSC_shattrath_city();
void AddSC_terokkar_forest();
void AddSC_zangarmarsh();

// The name of this function should match:
// void Add${NameOfDirectory}Scripts()
void AddOutlandScripts()
{
    // Outland
	// Auchindoun - Auchenai Crypts
    AddSC_boss_exarch_maladaar();
	AddSC_boss_shirrak_the_dead_watcher();
	
	// Auchindoun - Mana Tombs
	AddSC_boss_nexusprince_shaffar();
	AddSC_boss_pandemonius();
	
	// Auchindoun - Sethekk Halls
	AddSC_boss_darkweaver_syth();
	AddSC_boss_talon_king_ikiss();
	AddSC_instance_sethekk_halls();
	
	// Auchindoun - Shadow Labyrinth
	AddSC_boss_ambassador_hellmaw();
	AddSC_boss_blackheart_the_inciter();
	AddSC_boss_grandmaster_vorpil();
	AddSC_boss_murmur();
	AddSC_instance_shadow_labyrinth();
	
	// Black Temple
	AddSC_black_temple();
	AddSC_boss_gurtogg_bloodboil();
	AddSC_boss_illidan();
	AddSC_boss_mother_shahraz();
	AddSC_boss_reliquary_of_souls();
	AddSC_boss_shade_of_akama();
	AddSC_boss_supremus();
	AddSC_boss_teron_gorefiend();
	AddSC_boss_najentus();
	AddSC_boss_illidari_council();
	AddSC_instance_black_temple();
	
	// Coilfang Reservoir - Serpent Shrine
	AddSC_boss_fathomlord_karathress();
	AddSC_boss_hydross_the_unstable();
	AddSC_boss_lady_vashj();
	AddSC_boss_leotheras_the_blind();
	AddSC_boss_the_lurker_below();
	AddSC_boss_morogrim_tidewalker();
	AddSC_instance_serpentshrine_cavern();
	
	// Coilfang Reservoir - Steam Vault
	AddSC_boss_hydromancer_thespia();
	AddSC_boss_mekgineer_steamrigger();
	AddSC_boss_warlord_kalithresh();
	AddSC_instance_steam_vault();
	
	// Coilfang Reservoir - The Slave Pens
	AddSC_boss_ahune_frost_lord();
	AddSC_instance_the_slave_pens();
	AddSC_the_slave_pens();
	
	// Coilfang Reservoir - Underbog
	AddSC_boss_hungarfen();
	AddSC_boss_the_black_stalker();
	
	// Gruuls Lair
	AddSC_boss_gruul();
	AddSC_boss_high_king_maulgar();
	AddSC_instance_gruuls_lair();
	
	// Hellfire Citatel - Blood Furnace
	AddSC_boss_broggok();
	AddSC_boss_kelidan_the_breaker();
	AddSC_boss_the_maker();
	AddSC_instance_blood_furnace();
	
	// Hellfire Citatel - Hellfire Ramparts
	AddSC_boss_omor_the_unscarred();
	AddSC_boss_vazruden_the_herald();
	AddSC_boss_watchkeeper_gargolmar();
	AddSC_instance_ramparts();
	
	// Hellfire Citatel - Magtheridons Lair
	AddSC_boss_magtheridon();
	AddSC_instance_magtheridons_lair();
	
	// Hellfire Citatel - Shattered Halls
	AddSC_boss_grand_warlock_nethekurse();
	AddSC_boss_warbringer_omrogg();
	AddSC_boss_warchief_kargath_bladefist();
	AddSC_instance_shattered_halls();
	
	// Tempest Keep - Arcatraz
	AddSC_arcatraz();
	AddSC_boss_dalliah_the_doomsayer();
	AddSC_boss_harbinger_skyriss();
	AddSC_boss_wrath_scryer_soccothrates();
	AddSC_boss_zereketh_the_unbound();
	AddSC_instance_arcatraz();
	
	// Tempest Keep - Botanica
	AddSC_boss_high_botanist_freywinn();
	AddSC_boss_laj();
	AddSC_boss_warp_splinter();
	
	// Tempest Keep - Eye
	AddSC_boss_alar();
	AddSC_boss_high_astromancer_solarian();
	AddSC_boss_kaelthas();
	AddSC_boss_void_reaver();
	AddSC_instance_the_eye();
	AddSC_the_eye();
	
	// Tempest Keep - Mechanar
	AddSC_boss_gatewatcher_gyrokill();
	AddSC_boss_gatewatcher_iron_hand();
	AddSC_boss_mechano_lord_capacitus();
	AddSC_boss_nethermancer_sepethrea();
	AddSC_boss_pathaleon_the_calculator();
	AddSC_instance_mechanar();
	
	// World Boss
	AddSC_boss_doomlordkazzak();
	AddSC_boss_doomwalker();
	
	// Zones
	AddSC_blades_edge_mountains();
	AddSC_hellfire_peninsula();
	AddSC_nagrand();
	AddSC_netherstorm();
	AddSC_shadowmoon_valley();
	AddSC_shattrath_city();
	AddSC_terokkar_forest();
	AddSC_zangarmarsh();
}

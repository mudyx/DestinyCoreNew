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

#ifndef SEAT_OF_THE_TRIUMVIRATE_H
#define SEAT_OF_THE_TRIUMVIRATE_H

enum eData
{
    DATA_ZURAAL         = 0,
    DATA_SAPRISH        = 1,
    DATA_NEZHAR         = 2,
    DATA_LURA           = 3,
    DATA_ALLERIA1       = 4,
    DATA_ALLERIA2       = 5,

    MAX_ENCOUNTER,

    LURA_INTRO_ADDS,
    SAPRISH_PORTALS,
};

enum eCreatures
{
    // bosses
    NPC_ZURAAL                  = 122313,
    NPC_SAPRISH                 = 122316,
    NPC_NEZHAR                  = 122056,
    NPC_LURA                    = 124729,

    //zuraal adds
    NPC_SHADOWGUARD             = 124171,
    NPC_COALESCED_VOID          = 122716,
    NPC_DARK_ABBERATION         = 122482,

    //first boss ends event
    NPC_ALLERIA_E1              = 123743,
    NPC_ALLERIA_TARGET          = 127008,
    NPC_LOCUSWALKER_E1          = 123744,
    //portal event
    NPC_SAPRISH_EVENTPORTAL     = 123767,
    NPC_SAPRISH_RIFT_TARGET     = 124266,
    NPC_SAPRISH_RIFT_WARDEN     = 122571,
    NPC_SAPRISH_CONV_CONTROL    = 124276,
    // saprish pets
    NPC_SAPRISH_DARKFANG        = 122319,
    NPC_SAPRISH_SHADEWING       = 125340,
    //after nezhar event
    NPC_DOOR_ST                 = 125104,
    //lura npcs
    NPC_LURA_INTROPORTAL        = 125102,
    NPC_VOID_PORTAL             = 124734,
    NPC_VOID_PORTAL_ADD         = 124745,
    NPC_LURA_LOCUSWALKER        = 125099,
    NPC_LURA_ALLERIA            = 123187,
    NPC_LURA_RIFT_WARDEN        = 125860,
    NPC_LURA_RIFT_ADD           = 125857,
    NPC_LURA_VOID_ZONE          = 123054,
    NPC_LURA_ALLERIA_OUTRO      = 125871,
    NPC_LURA_WALKER_OUTRO       = 125872,
};

enum Gameobjects
{
    GO_WALL_AE                  = 273789,
    GO_DOOR_LURA_1              = 272062,
    GO_DOOR_LURA_2              = 273661,
};

#endif
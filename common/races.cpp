/*	EQEMu: Everquest Server Emulator
	Copyright (C) 2001-2002 EQEMu Development Team (http://eqemu.org)

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; version 2 of the License.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY except by those people which sell it, which
	are required to give you total support for your newly bought product;
	without even the implied warranty of MERCHANTABILITY or FITNESS FOR
	A PARTICULAR PURPOSE. See the GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/

#include "../common/races.h"

const char* GetRaceName(uint16 race) {
	switch(race) {
		case HUMAN:
			return "Human";
		case BARBARIAN:
			return "Barbarian";
		case ERUDITE:
			return "Erudite";
		case WOOD_ELF:
			return "Wood Elf";
		case HIGH_ELF:
			return "High Elf";
		case DARK_ELF:
			return "Dark Elf";
		case HALF_ELF:
			return "Half Elf";
		case DWARF:
			return "Dwarf";
		case TROLL:
			return "Troll";
		case OGRE:
			return "Ogre";
		case HALFLING:
			return "Halfling";
		case GNOME:
			return "Gnome";
		case IKSAR:
			return "Iksar";
		case WEREWOLF:
			return "Werewolf";
		case SKELETON:
			return "Skeleton";
		case ELEMENTAL:
			return "Elemental";
		case EYE_OF_ZOMM:
			return "Eye of Zomm";
		case WOLF_ELEMENTAL:
			return "Wolf Elemental";
		case IKSAR_SKELETON:
			return "Iksar Skeleton";
		case VAHSHIR:
			return "Vah Shir";
		case FROGLOK:
		case FROGLOK2:
			return "Froglok";
		case DRAKKIN:
			return "Drakkin";
		default:
			return "Unknown";
	}
}

uint32 GetArrayRace(uint16 race) {
	switch(race) {
		case HUMAN:
			return Array_Race_HUMAN;
		case BARBARIAN:
			return Array_Race_BARBARIAN;
		case ERUDITE:
			return Array_Race_ERUDITE;
		case WOOD_ELF:
			return Array_Race_WOOD_ELF;
		case HIGH_ELF:
			return Array_Race_HIGH_ELF;
		case DARK_ELF:
			return Array_Race_DARK_ELF;
		case HALF_ELF:
			return Array_Race_HALF_ELF;
		case DWARF:
			return Array_Race_DWARF;
		case TROLL:
			return Array_Race_TROLL;
		case OGRE:
			return Array_Race_OGRE;
		case HALFLING:
			return Array_Race_HALFLING;
		case GNOME:
			return Array_Race_GNOME;
		case IKSAR:
			return Array_Race_IKSAR;
		case VAHSHIR:
			return Array_Race_VAHSHIR;
		case FROGLOK:
		case FROGLOK2:
			return Array_Race_FROGLOK;
		case DRAKKIN:
			return Array_Race_DRAKKIN;
		case ALAKAMIN_DRAGON:
		case ALAKAMIN_BIXIE:
		case ALAKAMIN_PYRILEN:
		case ALAKAMIN_GELIDRAN:
		case ALAKAMIN_WEREWOLF:
		case ALAKAMIN_SHILLISKIN:
		case ALAKAMIN_BEHOLDER:
		case ALAKAMIN_HARPYR:
		case ALAKAMIN_SATYR:
		case ALAKAMIN_AVIAK:
		case ALAKAMIN_SIREN:
		case ALAKAMIN_MINOTAUR:
		case ALAKAMIN_FUNGOID:
		case ALAKAMIN_KOBOLD:
		case ALAKAMIN_GOBLIN:
		case ALAKAMIN_ORC:
		case ALAKAMIN_ULTRATAUR:
		case ALAKAMIN_BAZU:
		case ALAKAMIN_FAERIE:
		case ALAKAMIN_GARGOYLE:
		case ALAKAMIN_KERRAN:
		case ALAKAMIN_BROWNIE:
		case ALAKAMIN_ZOMBIE:
		case ALAKAMIN_BANSHEE:
		case ALAKAMIN_GNOLL:
		case ALAKAMIN_TROLL_PIRATE:
		case ALAKAMIN_GNOME_PIRATE:
		case ALAKAMIN_DARK_ELF_PIRATE:
		case ALAKAMIN_OGRE_PIRATE:
		case ALAKAMIN_HUMAN_PIRATE:
		case ALAKAMIN_ERUDITE_PIRATE:
		case ALAKAMIN_IMP:
		case ALAKAMIN_DRAKE:
		case ALAKAMIN_SCRYKIN:
		case ALAKAMIN_GNOMEWORK:
		case ALAKAMIN_GOLEM:

			return Array_Race_SHROUD;
		default:
			return Array_Race_UNKNOWN;
	}
}

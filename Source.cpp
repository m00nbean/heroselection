#include<iostream>
#include<string>
#include<vector>



int main() {

	using namespace std;
	while (true) {

		string heroPool[] = { "npc_dota_hero_axe,","npc_dota_hero_bane,","npc_dota_hero_bloodseeker,",
							"npc_dota_hero_bristleback,","npc_dota_hero_chaos_knight,","npc_dota_hero_crystal_maiden,","npc_dota_hero_dazzle,",
							"npc_dota_hero_death_prophet,","npc_dota_hero_dragon_knight,","npc_dota_hero_drow_ranger,","npc_dota_hero_earthshaker,",
							"npc_dota_hero_jakiro,",	"npc_dota_hero_juggernaut,",	"npc_dota_hero_kunkka,","npc_dota_hero_lich,","npc_dota_hero_lina,",
							"npc_dota_hero_lion,","npc_dota_hero_luna,","npc_dota_hero_necrolyte,","npc_dota_hero_nevermore,","npc_dota_hero_omniknight,",
							"npc_dota_hero_oracle,",	"npc_dota_hero_phantom_assassin,","npc_dota_hero_pudge,","npc_dota_hero_razor,","npc_dota_hero_sand_king,",
							"npc_dota_hero_skeleton_king,","npc_dota_hero_skywrath_mage,","npc_dota_hero_sniper,","npc_dota_hero_sven,","npc_dota_hero_tidehunter,",
							"npc_dota_hero_tiny,","npc_dota_hero_vengefulspirit,","npc_dota_hero_viper,","npc_dota_hero_warlock,","npc_dota_hero_windrunner,",
							"npc_dota_hero_witch_doctor,","npc_dota_hero_zuus,",
							"npc_dota_hero_ancient_apparition,","npc_dota_hero_batrider,","npc_dota_hero_centaur,","npc_dota_hero_clinkz,","npc_dota_hero_disruptor,",
							"npc_dota_hero_doom_bringer,","npc_dota_hero_enchantress,","npc_dota_hero_enigma,","npc_dota_hero_gyrocopter,","npc_dota_hero_leshrac,",
							"npc_dota_hero_lycan,","npc_dota_hero_magnataur,","npc_dota_hero_mirana,","npc_dota_hero_nyx_assassin,","npc_dota_hero_ogre_magi,",
							"npc_dota_hero_slardar,","npc_dota_hero_troll_warlord,","npc_dota_hero_ursa,",
							"npc_dota_hero_venomancer,","npc_dota_hero_winter_wyvern,","npc_dota_hero_abyssal_underlord,","npc_dota_hero_chen,",
							"npc_dota_hero_huskar,","npc_dota_hero_shadow_shaman,","npc_dota_hero_treant,","npc_dota_hero_undying,","npc_dota_hero_shadow_demon,",
							"npc_dota_hero_dark_willow,","npc_dota_hero_earth_spirit,","npc_dota_hero_beastmaster,","npc_dota_hero_brewmaster,",
							"npc_dota_hero_elder_titan,","npc_dota_hero_grimstroke,","npc_dota_hero_mars,","npc_dota_hero_pangolier,",
							"npc_dota_hero_phoenix,","npc_dota_hero_snapfire,","npc_dota_hero_spirit_breaker,","npc_dota_hero_tusk,","npc_dota_hero_visage,",
		};

		int heronumber = sizeof(heroPool) / sizeof(heroPool[0]);

		string prefase = "dota_bot_force_pick ";
		srand(time(NULL));
		string selectedHeroes[9] = {};
		string phrase = " ";
		for (int i = 0; i < 9; i++) {
			selectedHeroes[i] = heroPool[rand() % heronumber];
			for (int j = 0; j < 9; j++) {
				if (selectedHeroes[i] == selectedHeroes[j]) {
					if (j == i)
					{
						j++;
					}
					else {
						selectedHeroes[i] = heroPool[rand() % heronumber];
						if (i < 1) {
							i--;
						}
						else
							i -= 2;
					}
				}
			}

		}

		for (int i = 0; i < 9; i++)
			prefase += selectedHeroes[i];

		string readyToUse = prefase + phrase;
		cout << "There is some heroes \n\n" << readyToUse << '\t' << '\n';
		cin.get();
	}



}
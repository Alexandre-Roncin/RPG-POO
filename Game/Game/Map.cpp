#include "Map.h"


const int width = 20;
const int height = 10;

int oneDToTwoD(Vector2 pos, int width)
{
	return pos.y * width + pos.x;
}

void LoadLevel(int map_size_x, int map_size_y, Hero H, const std::vector<Monstre>& Monstres, int* p)
{

	for (int j = 0; j < map_size_y; j++) {
		for (int i = 0; i < map_size_x; i++) {
			int index = i + (j * map_size_x);

			// Comparaison de la case en cours de generation et de celle du Hero/Monstre
			if (i == H.pos_x && j == H.pos_y) {
				std::cout << H.nom; // %c pour print un char
			}
			else {
				bool monstre_affiche = false;

				for (const Monstre& monstre : Monstres) {
					if (i == monstre.pos_x && j == monstre.pos_y) {
						std::cout << "%c " << monstre.nom;
						monstre_affiche = true;
						break;
					}
				}

				if (!monstre_affiche) {
					// Generer la case normalement

					switch (p[index]) {
					case Ground:
						std::cout << '.';
						break;
					case Mountain:
						std::cout << 'M';
						break;
					case Water:
						std::cout << '~';
						break;
					case Exit:
						std::cout << 'E';
						break;
					}
				}
			}
		}
		
	}

	// Display de la vie
	std::cout << H.health << H.max_health;

}

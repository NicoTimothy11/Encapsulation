#include <iostream>
#include <string>

using namespace std;

class GameSprite {
private:
	int health;
	int armor;
	string weapon;
	string type;
public:
	GameSprite(int health, int armor, string weapon) {
		this->health = health;
		this->armor = armor;
		this->weapon = weapon;
	}

	void setHealth(int newHealth) {
		health = newHealth;
	}

	void setArmor(int newArmor) {
		armor = newArmor;
	}

	void setWeapon(string newWeapon) {
		weapon = newWeapon;
	}

	int getHealth() {
		return health;
	}

	int getArmor() {
		return armor;
	}
	string getWeapon() {
		return weapon;
	}
};

int main() {
	GameSprite Dino(3, 6, "jaws");
	cout << "Health: " << Dino.getHealth();
	return 0;
}


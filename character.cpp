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

	void Attack() {
		cout << "Attacks!" << endl;
	}

	void Defend(int value) {
		if(value > 0 && value <= armor) {
			armor -= value;
		}
	}
};

int main() {
	GameSprite Dino(3, 6, "jaws");
	cout << "Health: " << Dino.getHealth() << endl;
	Dino.Defend(5);
	cout << "Armor: " << Dino.getArmor() << endl;
	cout << "Remaining Health: " << Dino.getHealth() << endl;
	cout << "Remaining Armor: " << Dino.getArmor() << endl;
	return 0;
}


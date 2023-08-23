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

	void Defend() {
		if(armor > 0) {
			armor -= 1;
		}

		else if(armor == 0) {
			if(health > 0) {
				health -= 1;
			}
		}
	}

	void Check() {
		if(armor <= 0  && health <= 0) {
			cout << "Dead Bull" << endl;
		}
		else {
			cout << "Alive" << endl;
		}
	}
};

int main() {
	GameSprite Dino(3, 3, "jaws");
	cout << "Health: " << Dino.getHealth() << endl;
	cout << "Armor: " << Dino.getArmor() << endl;
	Dino.Defend();
	Dino.Defend();
	Dino.Defend();
	Dino.Defend();
	Dino.Defend();
	Dino.Defend();
	cout << "Remaining Armor: " << Dino.getArmor() << endl;
	cout << "Remaining Health: " << Dino.getHealth() << endl;
	Dino.Check();
	return 0;
}


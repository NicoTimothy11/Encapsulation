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
		cout << " **Slash** " << endl;
	}

	void Defend(int Value) {
		if(Value > 0 && Value < armor) {
			cout << "-/-/-/-/" << endl;
			armor -= Value;
		}
		else {
			cout << "No More Armor Left" << endl;
			health -= Value;
		}
	}

	void HealthCheck() {
		if(health == 0) {
			cout << "Dead" << endl;
		}
		else {
			cout << "Alive" << endl;
			cout << "Remaining Health: " << getHealth() << endl;
		}
	}
};

int main() {
	GameSprite Dino(3, 6, "jaws");
	cout << "Health: " << Dino.getHealth() << endl;
	Dino.Attack();
	Dino.Defend(8);
	cout << "Armor: " << Dino.getArmor() << endl;
	Dino.HealthCheck();
	return 0;
}


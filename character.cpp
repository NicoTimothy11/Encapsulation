#include <iostream>
#include <string>

using namespace std;

class GameSprite {
public:
	void showName(string name) {
		cout << name << endl;
	}
};

int main() {
	GameSprite obj;
	obj.showName("Nico");
	return 0;
}

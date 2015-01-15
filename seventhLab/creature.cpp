#include <iostream>

using namespace std;


class Creature {

private:
	string Name;

public:
	Creature() {
		cout << "new object Creature (without args)" << endl;
	}

	Creature(string name) {
		Name = name;
		cout << "new object Creature" << endl;
	}
	~Creature() {
		cout << "deleted object Creature" << endl;
	}

	void show() {
		cout << "Content: " << Name << endl;
	}
	
	string getName() {
		return Name;
	}
};

void test() {
	//Creature creatureOne("zz");
	//Creature creatureTwo;
	//Creature* creatureThree = new Creature("aaa");
	//cout << creatureThree->getName() << endl;
	Creature* creatureFour = new Creature[3];

	//delete creatureThree;
	delete [] creatureFour;
}

int main(int argc, char const *argv[])
{
	test();
	Creature creatureFour("dddd");
	creatureFour.show();
	Creature creatureTwo;
	creatureTwo.show();

	return 0;
}
#include <iostream>

using namespace std;

class Animal {
public:
	double Mass;

	Animal (double mass = 0) {
		Mass = mass;
		cout << "new Animal with mass " << Mass << " is created " << endl;
	}

	~Animal () {
		cout << "Animal is destroyed " << endl;	
	}

	virtual void sing() {
		cout << "Animal, mass: " << Mass << endl;
	}

	friend ostream& operator<< (ostream& os, const Animal& animal);
};


class Bird : public Animal {
public:
	string Shape;
	Bird () {
		cout << "New Bird is created " << endl;	
	}
	Bird (string shape = "", double mass = 1): Shape(shape), Animal(mass) {
		cout << "New Bird with shape " << Shape << " and mass " << mass <<  " is created " << endl;	
	}
	~Bird () {
		cout << "Bird is destroyed " << endl;	
	}

	void sing() {
		cout << "Bird, mass: " << Mass << ", shape: " << Shape << endl;
	}
	
};

ostream& operator<< (ostream& os, const Animal& animal) {
	os << "this is animal, mass: " << animal.Mass << endl;
	return os;
}

class Fish : public Animal {
public:
	bool FreshWatered;

	Fish () {
		cout << "New Fish is created " << endl;	
	}
	Fish (bool freshWatered, double mass): 
		FreshWatered(freshWatered), Animal(mass) {
		cout << "New Fish with fresh " << FreshWatered << " and mass " << mass << " is created " << endl;	
	}
	~Fish () {
		cout << "Fish is destroyed " << endl;
	}
	
	void sing() {
		cout << "Fish, mass: " << Mass << ", fresh: " << FreshWatered << endl;
	}
};

int main(int argc, char const *argv[]) {
	
	Animal animal(21.2);
	Fish tuna(true, 12.3);
	Bird duck("aaa", 31.2);
	Animal a = tuna;
	Animal *b = &tuna;
	Bird *c = (Bird*) &animal;


	tuna.sing();
	duck.sing();
	a.sing();
	b->sing();
	c->sing();

	cout << animal;
	//std::cout << "W obiekcie c jest " << c->Shape << std::endl;
	return 0;
}
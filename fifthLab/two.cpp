#include <iostream>

using namespace std;

struct Candy {
	char* name;
	double weight;
	int calories; 
};

void init(Candy* candy, char* name="dsasad", double weight=10.5, int calories=1013) {
	candy->name = name;
	candy->weight = weight;
	candy->calories = calories;
}

void display(Candy* candy) {
	cout << candy->name << " " << candy->weight << " " << candy->calories << endl;
}

int main(int argc, char const *argv[]) {
	Candy candy;
	init(&candy, "czx", 23.1, 11);
	display(&candy);

	Candy candyTwo;
	init(&candy, "zxc");
	display(&candyTwo);
	return 0;
}
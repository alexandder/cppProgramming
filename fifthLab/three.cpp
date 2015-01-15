#include <iostream>

using namespace std;

void set(int &x, int &y) {
	cout << x <<endl;
	cout << y <<endl;
	if (x > y) {
		int tmp = x;
		x = y;
		y = tmp;
	}
}

void set(double &x, double &y) {
	if (x > y) {
		double tmp = x;
		x = y;
		y = tmp;
	}
}

void set(string &x, string &y) {
	if (x > y) {
		string tmp = x;
		x = y;
		y = tmp;
	}
}

int main(int argc, char const *argv[])
{
	int x = 6;
	int y = 2;

	set(x, y);

	cout << "x: " << x << " y: " << y << endl;

	string st = "c";
	string zt = "b";
	cout << "st: " << st << " zt: " << zt << endl;
	set(st, zt);
	cout << "st: " << st << " zt: " << zt << endl;
	return 0;
}

#include <iostream>

using namespace std;

template <typename T>
void set(T &x, T &y) {
	if (x > y) {
		T tmp = x;
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

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int x = 12;
	cout << x << endl;
	{
		int x = 16;
		cout << x << endl;
		x++;
	}
	cout << x << endl;
	return 0;
}
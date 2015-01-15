#include <iostream>
#include <cmath>
using namespace std;

void fill(int tab[], int n) {
	for (int i = 0; i < n; ++i)
	{
		tab[i] = i;
	}
}

int main(int argc, char const *argv[])
{
	long n = pow(2,21) - 5000;
	cout << n << endl;
	int tab[n];
	fill(tab, n);

	long m = pow(2, 31) + 100000;
	cout << m << endl;
	int* t = new int[m];
	fill(t, m);
	return 0;
}
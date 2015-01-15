#include <iostream>

using namespace std;

void f1(char* s) {	
	cout << s << endl;	
}

void f1(char* s, int n) {
	static int f1ID = 1;
	for (int i = 0; i < f1ID; ++i) {
		cout << s << endl;
	}
	f1ID++;
}

int main(int argc, char const *argv[])
{
	f1("dsa");
	f1("aaa", 2);
	f1("zxcz", 0);
	f1("xcz");
	f1("zxcz", 0);
	return 0;
}
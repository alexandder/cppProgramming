#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char **argv) {
  string name;
  cout << "Give a name: " << endl;
  cin >> name;
  cout << endl;
  transform(name.begin(), name.end(), name.begin(), ::tolower);
  if (name.at(name.length() - 1) == 'a') {
    cout << "Witam pani " << name << endl;
  }
  else {
    cout << "Witam panie " << name << endl;
  }
}

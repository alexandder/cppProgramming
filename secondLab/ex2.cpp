#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char **argv) {
  string word;
  cout << "Give a word: " << endl;
  if (getline(cin, word)) {
    cout << endl;
    for(int i = word.length() - 1; i >= 0; i--) {
      cout << word.at(i);
    }
    cout << endl;
  }

  return 0;
}

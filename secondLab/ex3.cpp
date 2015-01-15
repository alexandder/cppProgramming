#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool isPalindrome(string word) {
  if (word.length() <= 1) {
    return true;
  }
  else if (word[0] == word[word.length() - 1]) {
    return isPalindrome(word.substr(1, word.length() - 2));
  }
  else {
    return false;
  }
}


int main(int argc, char **argv) {
  string word;
  cout << "Give a word: " << endl;
  if (getline(cin, word)) {
    cout << endl;
    cout << "Is palindrome: " << boolalpha << isPalindrome(word);    
    cout << endl;
  }

  return 0;
}

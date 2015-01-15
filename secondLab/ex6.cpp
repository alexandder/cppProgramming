#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct Person {
  string name;
  string lastName;
  string email;
};

void print(Person person) {
  int size = max(person.name.length() + person.lastName.length() + 1, person.email.length());
  cout << "+";
  for (int i = 0; i < size + 10; i++) {
    cout << "-";
  }
  cout << "+" << endl;
  cout << "| Pan";
  for (int i = 0; i < size + 6; i++) {
    cout << " ";
  }
  cout << "|" << endl;

  cout << "|  " << person.name << " " << person.lastName;
  for (int i = 0; i < size + 7 - person.name.length() - person.lastName.length(); i++) {
    cout << " ";
  }
  cout << "|" << endl;

  cout << "|  " << person.email;
  for (int i = 0; i < size + 8 - person.email.length(); i++) {
    cout << " ";
  }
  cout << "|" << endl;

  cout << "+";
  for (int i = 0; i < size + 10; i++) {
    cout << "-";
  }
  cout << "+" << endl;
}

int main(int argc, char **argv) {
  Person person;
  cout << "Give a name: " << endl;
  getline(cin, person.name);
  cout << endl;

  cout << "Give a last name: " << endl;
  getline(cin, person.lastName);
  cout << endl;

  cout << "Give an email " << endl;
  getline(cin, person.email);
  cout << endl;

  print(person);
  return 0;
}

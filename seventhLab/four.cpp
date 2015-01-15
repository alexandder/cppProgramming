#include <iostream>

using namespace std;

enum gender
{
	MALE = 1,
	FEMALE = 0
};

class Creature {

private:
	string Name;

public:
	Creature() {
		cout << "new object Creature (without args)" << endl;
	}

	Creature(string name) {
		Name = name;
		cout << "new object Creature" << endl;
	}
	~Creature() {
		cout << "deleted object Creature" << endl;
	}

	virtual void show() const{
		cout << "Content: " << Name << endl;
	}
	
	string getName(){
		return Name;
	}

	// void setName(string name) {
	// 	Name = name;
	// }
};

class Mamal : public Creature
{
public:
	Mamal(gender g = MALE) {
		m_gender = g;		
		cout << "Mamal created" << endl;
	}
	Mamal(int legs) {
		m_legs = legs;
		cout << "Mamal created with " << m_legs << " legs" << endl;
	}
	~Mamal() {
		cout << "Mamal destroyed" << endl;
	}

	void show() const{
		cout << "Show from Mamal, gender " << m_gender << endl;
	}

private:
	int m_legs;	
	gender m_gender;
};


void test2() {
	 
	const Creature c1;
	Mamal m1(MALE);
	c1.show();
	m1.show();
	
}

int main(int argc, char const *argv[])
{
	//test2();

	Creature c;
	Mamal m(FEMALE);
	Creature *x;
	x=&c;
	x->show();
	x=&m;
	x->show();
	Mamal m2;
	m2.show();
	return 0;
}
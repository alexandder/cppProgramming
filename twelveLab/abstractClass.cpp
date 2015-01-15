#include <iostream>

using namespace std;

class Square
{
public:
	bool isTraversable;

	virtual Square();
	virtual ~Square();
	
};

class Ground : public Square
{
public:
	Ground();
	~Ground();
	
};
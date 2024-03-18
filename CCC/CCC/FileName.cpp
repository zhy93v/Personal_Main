#include <iostream>
using namespace std;



class Monster
{

public :
	Monster()
	{
		cout << "Monster()" << endl;
	}
	~Monster()
	{
		cout << "~Monster()" << endl;
	}
public:
	// ¸É¹ö º¯¼ö

	int _hp = 0;
	
};

int main()
{
	// malloc + free
	// new + delete

	Monster* m1 = new Monster();

	delete m1;
}
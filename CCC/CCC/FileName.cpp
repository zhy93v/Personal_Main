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
	// �ɹ� ����

	int _hp = 0;
	
};

int main()
{
	// malloc + free
	// new + delete

	Monster* m1 = new Monster();

	delete m1;
}
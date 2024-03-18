#include "Item.h"
#include <iostream>
using namespace std;

//        *********************
//		          Item
//        *********************

Item::Item()
{
	int randValue = rand() % 100;

	if (randValue < 50)
	{
		_rarity = IR_Normal;
	}
	else if (randValue < 80)
	{
		_rarity = IR_Rare;
	}
	else
	{
		_rarity = IR_Unique;
	}
}

Item::~Item()
{

}

void Item::PrintInfo()
{
	switch (_rarity)
	{
	case IR_Normal:
		cout << "노말" << endl;
		break;
	case IR_Rare:
		cout << "레어" << endl;
		break;
	case IR_Unique:
		cout << "유니크" << endl;
		break;
	}
}

//        *********************
//		          Weapon
//        *********************

Weapon::Weapon()
{

}

Weapon::~Weapon()
{

}

void Weapon::PrintInfo()
{

	cout << "타입 : 무기" << endl;
	cout << "공격력 : "<< _damage << endl;
	Item::PrintInfo();
	cout << "*************" << endl;


}

//        *********************
//		          Armor
//        *********************

Armor::Armor()
{

}

Armor::~Armor()
{

}

void Armor::PrintInfo()
{

	cout << "타입 : 방어구" << endl;
	cout << "방어력 : " << _defence << endl;
	Item::PrintInfo();
	cout << "*************" << endl;


}
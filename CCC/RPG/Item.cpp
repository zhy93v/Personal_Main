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
		cout << "�븻" << endl;
		break;
	case IR_Rare:
		cout << "����" << endl;
		break;
	case IR_Unique:
		cout << "����ũ" << endl;
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

	cout << "Ÿ�� : ����" << endl;
	cout << "���ݷ� : "<< _damage << endl;
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

	cout << "Ÿ�� : ��" << endl;
	cout << "���� : " << _defence << endl;
	Item::PrintInfo();
	cout << "*************" << endl;


}
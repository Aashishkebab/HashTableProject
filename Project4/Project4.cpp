// Project4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "HashTable.h"
#include "Slot.h"
using namespace std;


int main()
{

	HashTable<int>* hi = new HashTable<int>();

	int col;
	hi->insert(1, 1, col);
	hi->insert(11, 2, col);
	hi->insert(111, 3, col);
	hi->insert(1111, 4, col);
	hi->insert(11111, 5, col);

	int temp;
	hi->find(11, temp);
	cout << temp;
	hi->remove(11);
	temp = 938427;
	hi->find(11, temp);
	cout << temp;

	system("PAUSE");
    return 0;
}

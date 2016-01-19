/*
 * SillyAppController.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: Colm Laro
 */

#include "SillyAppController.h"
#include <iostream>
using namespace std;

SillyAppController :: SillyAppController()
{
	this->count = 99;
}

void SillyAppController :: setCount(int count)
{
	this->count = count;
}

int SillyAppController :: getCount()
{
	return this->count;
}

void SillyAppController :: start()
{
	cout << "Print this out" << endl;
	cout << getCount() << " is the count right now." << endl;
	cout << "Type in a new value for count." << endl;
	int tempCount;
	cin >> tempCount;
	setCount(tempCount);
	cout << getCount() << " is the updated count" << endl;
}

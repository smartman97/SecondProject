/*
 * SillyAppController.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: Colm Laro
 */

#include "SillyAppController.h"
#include <iostream>
#include <string>
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
	cout << doubleArray << endl;
	cout << intArray << endl;
}

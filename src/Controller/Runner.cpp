/*
 * Runner.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: Colm Laro
 */

#include "SillyAppController.h"


int main()
{
	SillyAppController* baseController = new SillyAppController();
	baseController->start();
	//Same but different VV
	//(*baseController).start();
	return 0;
}




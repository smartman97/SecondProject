/*
 * SillyAppController.h
 *
 *  Created on: Jan 19, 2016
 *      Author: clar5254
 */

#ifndef CONTROLLER_SILLYAPPCONTROLLER_H_
#define CONTROLLER_SILLYAPPCONTROLLER_H_

class SillyAppController
{
private:
	int count;
	int intArray[5] = {1,2,3,4,5};
	double doubleArray[5] = {1.0,2.0,3.0,4.0,5.0};
public:
	SillyAppController();
	void setCount(int count);
	int getCount();
	void start();
};



#endif /* CONTROLLER_SILLYAPPCONTROLLER_H_ */

/*
 * AnimalShow.h
 *
 *  Created on: 28-Mar-2022
 *      Author: Admin
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_

//#include "Tricks.h"
class Tricks;
#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void show() = 0;
	virtual void accept(Tricks *t) = 0;
	//virtual ~Animal() {}
};




#endif /* ANIMAL_H_ */

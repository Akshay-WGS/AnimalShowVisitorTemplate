/*
 * Dog.h
 *
 *  Created on: 28-Mar-2022
 *      Author: Admin
 */

#ifndef DOG_H_
#define DOG_H_

#include "Dog.h"
#include "Tricks.h"

class Dog : public Animal
{
public:
	void show();
	void accept(Tricks *t);
};




#endif /* DOG_H_ */

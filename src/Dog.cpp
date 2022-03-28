/*
 * Dog.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: Admin
 */

#include "Dog.h"
#include "Implement.h"
#include "Tricks.h"

void Dog::show()
{
	cout << "Dog show" << endl;
}

void Dog::accept(Tricks *t)
{
	t->visitDogShow(this);
}

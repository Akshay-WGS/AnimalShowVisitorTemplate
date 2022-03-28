/*
 * Cat.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: Admin
 */

#include "Cat.h"
#include "Implement.h"
#include "Tricks.h"

void cat::show()
{
	cout << "Cat show" << endl;
}

void cat::accept(Tricks *t)
{
	t->visitCatShow(this);
}


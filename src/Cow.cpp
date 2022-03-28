/*
 * Cow.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: Admin
 */

#include "Cow.h"
#include "Implement.h"
#include "Tricks.h"

void Cow::show()
{
	cout << "Cow Show" << endl;
}

void Cow::accept(Tricks *t)
{
	t->visitCowShow(this);
}




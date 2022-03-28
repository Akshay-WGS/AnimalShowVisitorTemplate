/*
 * Cow.h
 *
 *  Created on: 28-Mar-2022
 *      Author: Admin
 */

#ifndef COW_H_
#define COW_H_

#include "Cow.h"
#include "Tricks.h"

class Cow : public Animal
{
public:
	void show();
	void accept(Tricks *t);
};



#endif /* COW_H_ */

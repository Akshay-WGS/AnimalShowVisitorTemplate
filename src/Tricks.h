/*
 * Tricks.h
 *
 *  Created on: 28-Mar-2022
 *      Author: Admin
 */

#ifndef TRICKS_H_
#define TRICKS_H_

#include "Animal.h"
class cat;
class Dog;
class Cow;

class Tricks
{
public:
	virtual void visitCatShow(cat *catshow ) = 0;
	virtual void visitDogShow(Dog *dogshow) = 0;
	virtual void visitCowShow(Cow *cowshow) = 0;
	virtual ~Tricks() {}
};




#endif /* TRICKS_H_ */

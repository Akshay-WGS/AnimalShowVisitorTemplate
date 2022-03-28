/*
 * Implement.h
 *
 *  Created on: 28-Mar-2022
 *      Author: Admin
 */

#ifndef IMPLEMENT_H_
#define IMPLEMENT_H_

#include "Tricks.h"

class Jump :public Tricks
{
public:
	void visitCatShow(cat *catshow );
	void visitDogShow(Dog *dogshow);
	void visitCowShow(Cow *cowshow);

};

class Running : public Tricks
{
public:
	void visitCatShow(cat *catshow );
	void visitDogShow(Dog *dogshow);
	void visitCowShow(Cow *cowshow);

};

class Eating : public Tricks
{
public:
	void visitCatShow(cat *catshow );
	void visitDogShow(Dog *dogshow);
	void visitCowShow(Cow *cowshow);
};


#endif /* IMPLEMENT_H_ */

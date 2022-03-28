/*
 * Implement.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: Admin
 */

#include "Implement.h"
#include "Tricks.h"

void Jump::visitCatShow(cat* catshow)
{
	cout << "Cat Jumps " << endl;
}

void Jump::visitCowShow(Cow* cowshow)
{
	cout << "Cow Jumps " << endl;
}

void Jump::visitDogShow(Dog* dogshow)
{
	cout << "Dog Jumps" << endl;
}

void Running::visitCatShow(cat* catshow)
{
	cout << "Cat is Running " << endl;
}

void Running::visitCowShow(Cow* cowshow)
{
	cout << "Cow is Running" << endl;
}

void Running::visitDogShow(Dog* dogshow)
{
	cout << "Dog is Running" << endl;
}

void Eating::visitCatShow(cat* catshow)
{
	cout << "Cat is Eating" << endl;
}

void Eating::visitCowShow(Cow* cowshow)
{
	cout << "Cow is Eating" << endl;
}


void Eating::visitDogShow(Dog* dogshow)
{
	cout << "Dog is Eating" << endl;
}



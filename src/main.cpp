/*
 * main.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: Admin
 */

#include "Animal.h"
#include "Tricks.h"
#include "Cow.h"
#include "Cat.h"
#include "Dog.h"
#include "Implement.h"


int main()
{
	Animal *an = new cat();
	Animal *ani = new Cow();
	Animal *anim = new Dog();

	Tricks* trJump = new Jump();
	Tricks* trRun = new Running();
	Tricks* trEat = new Eating();

	anim->show();
	anim->accept(trRun);

	an->show();
	an->accept(trJump);

	ani->show();
	ani->accept(trEat);




	return 0;
}



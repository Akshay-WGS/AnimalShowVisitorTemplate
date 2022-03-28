/*
 * Cat.h
 *
 *  Created on: 28-Mar-2022
 *      Author: Admin
 */

#ifndef CAT_H_
#define CAT_H_


#include "Tricks.h"

class cat: public Animal
{
public:
	void show();
	void accept(Tricks *t);
};





#endif /* CAT_H_ */

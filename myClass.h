#include <string>
#include <stdio.h>
#include "weapon.h"
#include <stdlib.h>

#ifndef MYCLASS_H
#define MYCLASS_H

class myClass : public Weapon
{
public:

	myClass() : Weapon("myClass", hitPoints) {
	}

	virtual double x(double armor);
	virtual ~myClass() {};
};

#endif /* MYCLASS_H */


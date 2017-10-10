#pragma once
#include <time.h>
#include <string>
#include <stdio.h>
#include "weapon.h"
#include <stdlib.h>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H


class CrazyRandomSword : public Weapon 
{
public:
	int random = rand() % 91 + 10;

	CrazyRandomSword() : Weapon("CrazyRandomSword", random) {
	}

	virtual ~CrazyRandomSword() {};
	virtual double hit(double armor); 
};

#endif /* CRAZYRANDOMSWORD_H */
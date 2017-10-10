/*
* File:   CommonSpear.h
* Author: Javier <jrescobara@gmail.com>
*
* Created on September 27, 2017, 4:15 PM
*/

#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

/**
* Defines the behavior of a common spear (hitpoint = 40, ignores 20% of
* armor points)
*/
class SimpleAxe : public Weapon {
public:

	SimpleAxe() : Weapon("Simple Axe", 60.0) {
	}
	virtual ~SimpleAxe() {};
	virtual double hit(double armor);

};

#endif /* SIMPLEAXE_H */

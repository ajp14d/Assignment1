#include <time.h>
#include <string>
#include <stdio.h>
#include "crazyrandomsword.h"
#include <stdlib.h>

double CrazyRandomSword::hit(double armor) 
{
	srand(time(NULL));

	int armr = armor / 2; 
	int randm = rand() % armr; 

	double damage = hitPoints - randm; 
	if (damage < 0)
		return 0; 

	return damage; 
};


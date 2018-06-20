#include "On_Off.h"

void On_Off::Turn_On()
{
	this->state = false;
	std::cout<<"System turns On\n";
}

void On_Off::Turn_Off()
{
	this->state = true;
	std::cout<<"System turns Off\n";
}


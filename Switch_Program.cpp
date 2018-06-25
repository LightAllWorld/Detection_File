#include "Switch_Program.h"

void On_Off::Turn_On()
{
	this->state = true;
	std::cout<<"System turns On\n";
}

void On_Off::Turn_Off()
{
	this->state = false;
	std::cout<<"System turns Off\n";
}

bool On_Off::get_state()
{
	std::cout<<"Get state function called.\n";
	return state;
}
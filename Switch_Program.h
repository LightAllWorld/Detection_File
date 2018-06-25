/************************************************************************
* File Name : Switch_Program.h											*
* Description : This file manages state about program.					*
* Functions :															*
*	1. Turn_On															*
*		- This works changing program's state to detecting mode.		*
*	2. Turn_Off															*
*		- This works changing program's state to sleep mode.			*
*	3. get_state														*
*		- This is to get info of state.									*
************************************************************************/
#pragma once
#include <iostream>

class On_Off {
public:
	void Turn_On();
	void Turn_Off();
	On_Off()
	{
		state = true;
	}
	bool get_state();
private:
	bool state;
};
#pragma once

class On_Off {
public:
	void Turn_On();
	void Turn_Off();
	On_Off()
	{
		state = false;
	}
private:
	bool state;
};
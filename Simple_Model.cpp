#include "Simple_Model.h"
#include <iostream>

void Simple::Detection()
{
	std::cout<<"This is a Simple Model.\n\n";
	Input_layer();
	Hidden_layer1();
	Hidden_layer2();
	Out_layer();
	
	return;
}

float Simple::Input_layer()
{
	std::cout<<"This is a Input layer function.\n";
	return 1;
}

float Simple::Hidden_layer1()
{
	std::cout<<"This is a Hidden layer1 function.\n";
	return 1;
}

float Simple::Hidden_layer2()
{
	std::cout<<"This is a Hidden_layer2 function.\n";
	return 1;
}

float Simple::Out_layer()
{
	std::cout<<"This is a Output layer function.\n";
	return 1;
}
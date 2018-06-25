#include "Advenced_Model.h"
#include <iostream>

void Advence::Detection()
{
	Conv_Layer1();
	ReLU();
	Conv_Layer2();
	Max_Pooling_Layer1();
	ReLU();
	Conv_Layer3();
	ReLU();
	Conv_Layer4();
	Max_Pooling_Layer2();
	ReLU();
	Conv_Layer5();
	Max_Pooling_Layer3();
	ReLU();
	
	std::cout<<"This is a Advenced Model.\n";
	return;
}

void Advence::Conv_Layer1()
{
	std::cout<<"This is a conv layer1.\n";
	return;
}

void Advence::Conv_Layer2()
{
	std::cout<<"This is a conv layer2.\n";
	return;
}

void Advence::Conv_Layer3()
{
	std::cout<<"This is a conv layer3.\n";
	return;
}

void Advence::Conv_Layer4()
{
	std::cout<<"This is a conv layer4.\n";
	return;
}

void Advence::Conv_Layer5()
{
	std::cout<<"This is a conv layer5.\n";
	return;
}

void Advence::Max_Pooling_Layer1()
{
	std::cout<<"This is a pooling layer1.\n";
	return;
}

void Advence::Max_Pooling_Layer2()
{
	std::cout<<"This is a pooling layer2.\n";
	return;
}

void Advence::Max_Pooling_Layer3()
{
	std::cout<<"This is a pooling layer3.\n";
	return;
}

void Advence::ReLU()
{
	std::cout<<"This is a ReLU function.\n";
	return;
}
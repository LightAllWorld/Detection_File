#include "Model.h"
#include "Except_list.h"
#include <iostream>

Except_list* inst = Except_list::get_Inst();

void Dectection_Model::Init_cost()
{
	this->cost = 0;
	std::cout<<"Run Init_cost function.\n";
	return;
}

void Dectection_Model::Init_train()
{
	this->train = 0;
	std::cout<<"Run Init_train function.\n";
	return;
}

float Dectection_Model::ReLU()
{
	float result = 0;

	return result;
}

void Dectection_Model::Cast()
{
	std::cout<<"Run Cast function.\n";
	return;
}

void Dectection_Model::Check_Directory()
{
	std::cout<<"Run Check_Directory function.\n";
	return;
}

void Dectection_Model::feed_dict()
{
	std::cout<<"Run feed_dict fuction.\n";
	return;
}

void Dectection_Model::get_exc_list(Except_list* exc_Inst)
{
	this->list = exc_Inst->get_list();
	return;
}
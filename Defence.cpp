#include "Defence.h"
#include "Simple_Model.h"
#include "Advenced_Model.h"
#include "Preprocess.h"
#include <iostream>

Simple simp;
Advence adv;
Preprocess pre;

void Control::Set_Directory(std::string dir)
{
	Set_Dir_Info(dir);
	return;
}

void Control::Set_Option(std::string option)
{
	Set_Op_Info(option);
	return;
}

void Control::SimpleMode()
{
	Preprocessing();

	std::cout<<"Simple Mode call.\n";
	simp.Detection();
	return;
}

void Control::Advenced_Mode()
{
	adv.Set_Option(option);
	Preprocessing();

	std::cout<<"Advenced_mode call.\n";
	adv.Detection();
	return;
}

void Control::Make_Report()
{
	std::cout<<"Make Report!\n";
	return;
}

void Control::Set_Op_Info(std::string option)
{
	this->option = option;
}

void Control::Set_Dir_Info(std::string path)
{
	this->dir = path;
}

void Control::Preprocessing()
{
	std::cout<<"Call preprocessing function. (This is repeated by the number of files in the directory.)\n";
	pre.Set_dir(dir);
	pre.Process();
	return;
}
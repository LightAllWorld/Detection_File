#include "Defence.h"
#include "Except_List.cpp"
#include <iostream>

void Control::Set_Directory(std::string dir)
{
	Set_Dir_Info(dir);
	return;
}

void Control::Set_Option(setd::string option)
{
	Set_Op_Info(option);
	return;
}

void Control::SimpleMode()
{

}

void Control::Advenced_Mode()
{

}

void Control::Check_Exception_list()
{
	this->list = get_List();
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

}
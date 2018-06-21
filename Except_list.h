/************************************************************************
* File Name : Except_List.h												*
* Description : This file manages list about exception files.			*
* Functions :															*
*	1. Append_File														*
*		- This works appending exception file name in the list.			*
*	2. Delete_File														*
*		- This works deleting file name in the list.					*
*	3. Change_List														*
*		- This works changing infomation about file name in the list.	*
************************************************************************/
#pragma once
#include <list>

class Except_list
{
public:
	Except_list() {};
	std::list<std::string> get_List();
	bool Is_Exist(char* file_name);
	bool Is_Empty();
	void Append_File(char* file_name);
	void Delete_File(char* file_name);
	void Change_List(char* befo_name, char* after_name);
	void Display();
private:
	std::list<std::string> exc_list;
};
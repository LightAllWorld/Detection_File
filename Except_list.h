/************************************************************************
* File Name : Except_List.h												*
* Description : This file manages list about exception files.			*
* Functions :															*
*	1. Is_Empty															*
*		- This is to check the list is empty.							*
*	2. Is_Exist															*
*		- This is to check data is existed in the except list.			*
*	3. Append_File														*
*		- This works appending exception file name in the list.			*
*	4. Delete_File														*
*		- This works deleting file name in the list.					*
*	5. Change_List														*
*		- This works changing infomation about file name in the list.	*
*	6. Display															*
*		- THis shows all data of except list.							*
************************************************************************/
#pragma once
#include <list>

class Except_list
{
public:
	Except_list(){};
	static Except_list* get_Inst();
	static std::list<std::string> get_list();
	bool Is_Exist(char* file_name);
	bool Is_Empty();
	void Append_File(char* file_name);
	void Delete_File(char* file_name);
	void Change_List(char* befo_name, char* after_name);
	void Display();
private:
	static std::list<std::string> exc_list;
	static Except_list* instance;
	static bool flag;
};
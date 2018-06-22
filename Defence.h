#pragma once
#include <string>
#include <list>

class Control
{
public:
	void Set_Directiory(std::string dir);
	void Set_Option(std::string option);
	void SimpleMode();
	void HighMode();
	void Check_Exception_list();
	void Make_Report();
	
private:
	void Set_Op_Info(std::string option);
	void Set_Dir_Info(std::string path);
	void Preprocessing();
	std::string dir;
	std::string option;
	std::list<std::string> list;
};
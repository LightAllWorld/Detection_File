/************************************************************************************
* File Name : Defence.h																*
* Description : This file manages list about exception files.						*
* Functions :																		*
*	1. Set_Directory																*
*		- This is to call a setting directory method from private section.			*
*	2. Set_Option																	*
*		- This is to call a setting option method from private section.				*
*	3. SimpleMode																	*
*		- This is to set model as a simple detection model.		 					*
*	4. Advenced_Mode																*
*		- This is to set model as a advenced detection model.						*	
*	5. Check_Exception_List 														*
*		- This works checking the exception list.									*
*	6. Make_Report																	*
*		- This makes a report about result of detection.							*
*	7. Set_Op_Info																	*
*		- This is to set options.													*
*	8. Set_Dir_Info																	*
*		- This is to set directory.													*
*	9 Preprocessing																	*
*		- This extracts some features that uses to detection model from input file.	* 
************************************************************************************/
#pragma once
#include <string>
#include <list>

class Control
{
public:
	void Set_Directory(std::string dir);
	void Set_Option(std::string option);
	void SimpleMode();
	void Advenced_Mode();
	void Check_Exception_list();
	void Make_Report();
	
private:
	void Set_Op_Info(std::string option);
	void Set_Dir_Info(std::string path);
	void Preprocessing();
	std::string dir;
	std::string option;
};
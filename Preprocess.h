/********************************************************************************
* File Name : Preprocess.h														*
* Description : This file proccess the input file th extract feature.			*
* Functions :																	*
*	1. Precess																	*
*		- This is to extract the feature from input file.						*
*	2. Set_dir																	*
*		- This is a function that sets the directory information.				*
*	3. Anti_VM																	*
*		- This is to count number of the Anti_VM Singnatue from input file.		*
*	4. Anti_Debug																*
*		- This is to count number of the Anti_Debug Singnatue from input file.	*
*	5. Eval_Entropy																*
*		- This is to evaluate the entropy information from input file.			*
*	6. Check_Packer_Signature													*
*		- This is to count number of the packer's signature.					*
*	7. Is_Empty																	*
*		- Verify that you have other files to process.							*
********************************************************************************/


#pragma once
#include <list>
#include <string>

class Preprocess
{
public:
	void Process();
	void Set_dir(std::string dir);
	std::string Get_Report();
	Preprocess(): VM_count(0),
	Debug_count(0),
	Entropy(0),
	Signature_count(0)
	{};
private:
	float Anti_VM();
	float Anti_Debug();
	float Eval_Entropy();
	float Check_Packer_Signature();
	bool Is_Empty();	
	float VM_count;
	float Debug_count;
	float Entropy;
	float Signature_count;
	std::list<std::string> file_list;
};
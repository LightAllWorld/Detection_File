/************************************************************************
* File Name : Model.h													*
* Description : This file manages list about exception files.			*
* Functions :															*
*	1. Init_cost														*
*		- This is to initializing a cost value							*
*	2. Init_train														*
*		- This is to initializing a train tensor.						*
*	3. ReLU																*
*		- This is a activate function.									*
*	4. Cast																*
*		- This is to set prameters for accuracy.						*
*	5. Check_Directory													*
*		- This is to check directory for determining detect range.		*
*	6. feed_dict														*
*		- This is to offer parameter to detection algorithm.			* 
*	7	get_exc_list													*
*		- This gets the except list from singleton.						*
************************************************************************/

#pragma once
#include <list>
#include "Except_list.h"

class Detection_Model
{
public:
	virtual void Detection() {
		return;
	};

protected:
	// functions
	void Init_cost();
	void Init_train();
	void Init_Session();
	float ReLU();
	void Cast();
	void Check_Directory();
	void feed_dict();
	void get_exc_list();
	
	//A Attribute
	float weight;
	float x_data;
	float y_data;
	float X;
	float Y;
	float cost;
	float train;
	float hypothesis;
	float sess;
	std::list<std::string> list;
};
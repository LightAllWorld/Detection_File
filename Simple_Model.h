/****************************************************************************
* File Name : Except_List.h													*
* Description : This file manages list about exception files.				*
* Functions :																*
*	1. Detection															*
*		- This is to detect the file that scan for malicious or not.		*
*	2. Input_Layer															*
*		- This is to enter the data from file that is result of preprocess	*
*	3. Hidden_Layer1														*
*		- This is a neural network's hidden layer.							*
*	4. Hidden_Layer2														*
*		- This is a neural network's hidden layer.							*
*	5. Out_Layer															*
*		- This is to make a result about detecting file.					*
*	6. get_except_list														*
*		- This gets a except list.											*
****************************************************************************/

#pragma once
#include <list>
#include <string>
#include "Model.h"

class Simple : public Detection_Model
{
public:
	void Detection();
private:
	// Layer's weight
	float layer1_weight;
	float layer2_weight;

	// Layer's bias
	float layer1_bias;
	float layer2_bias;

	// Layer's functions
	float Input_layer();
	float Hidden_layer1();
	float Hidden_layer2();
	float Out_layer();

	//other attributes
	void get_except_list();
	std::list<std::string> list;
};
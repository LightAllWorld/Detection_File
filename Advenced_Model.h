/****************************************************************************
* File Name : Except_List.h													*
* Description : This file manages list about exception files.				*
* Functions :																*
*	1. Detection															*
*		- This is to detect the file that scan for malicious or not.		*
*	2. Conv_layer															*
*		- This is to extract locallity feature from input image file.		*
*	3. Max_pooling_layer													*
*		- This is to drop the unuseful feature from conv layer.				*
*	4. ReLU_layer															*
*		- This is a activate Function.										*
*	5. get_except_list														*
*		- This gets a except list.											*
****************************************************************************/


// This is a python code. But i can't cross compile c++ and python3. 
// So, next step is cross compile with c++ and python3.

#pragma once
#include <list>
#include <string>
#include "Model.h"

class Advence : public Detection_Model
{
public:
	void Detection();
	void Set_Option(std::string option);
	
private:
	// Convloutional layer function
	void Conv_Layer1();
	void Conv_Layer2();
	void Conv_Layer3();
	void Conv_Layer4();
	void Conv_Layer5();

	// Convolutional layer's filter attribute
	float conv1_filter;
	float conv2_filter;
	float conv3_filter;
	float conv4_filter;
	float conv5_filter;

	// Convolutional later's bias attribute
	float conv1_bias;
	float conv2_bias;
	float conv3_bias;
	float conv4_bias;
	float conv5_bias;
	
	// Pooling layer function
	void Max_Pooling_Layer1();
	void Max_Pooling_Layer2();
	void Max_Pooling_Layer3();

	// Pooling layer's filter 
	float pool1_filter;
	float pool2_filter;
	float pool3_filter;

	// Activate function
	void ReLU();

	// ohter attributes
	void get_except_list();

	std::string option;
	std::list<std::string> list;	
};
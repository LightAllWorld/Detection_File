#include "Preprocess.h"
#include <iostream>
#include <string>

void Preprocess::Process()
{
	std::cout<<"Preprocess call.\n";
}

float Preprocess::Anti_VM()
{
	std::cout<<"Check Anti VM signature.\n";
	VM_count++;
	return VM_count;
}

float Preprocess::Anti_Debug()
{
	std::cout<<"Check Anti Debug signautre.\n";
	Debug_count++;
	return Debug_count;

}

float Preprocess::Eval_Entropy()
{
	std::cout<<"Evaluation Entropy.\n";
	Entropy++;
	return Entropy;

}

float Preprocess::Check_Packer_Signature()
{
	std::cout<<"Check packer signautre.\n";
	Signature_count++;
	return Signature_count;
}

std::string Preprocess::Get_Report()
{
	std::string result;

	result += std::to_string(VM_count);
	result +=", ";
	result += std::to_string(Debug_count);
	result +=", ";
	result += std::to_string(Entropy);
	result +=", ";
	result += std::to_string(Signature_count);

	return result;
}

bool Preprocess::Is_Empty()
{
	if(this->file_list.empty() )
		return true;
	return false;
}

void Preprocess::Set_dir(std::string dir)
{
	this->file_list.push_front(dir);
}
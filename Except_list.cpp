#include "Except_list.h"
#include <iostream>


bool Except_list::Is_Empty()
{
	if( exc_list.empty() )
		return true;
	return false;
}

bool Except_list::Is_Exist(char* file_name)
{
	int condition = 0;
	std::list<std::string>::iterator iter;
	
	if( Is_Empty() == true )
	{
		std::cout<<"List is Empty.\n";
		return false;
	}
	
	for(iter = exc_list.begin() ; iter != exc_list.end() ; iter++ )
	{
		if( file_name == *iter )
		{
			condition = 1;
			break;
		}
	}

	if( condition == 0 )
		return false;
	
	return true;
}

void Except_list::Append_File(char* file_name)
{
	if( Is_Empty() == true )
	{
		exc_list.push_front(file_name);
		std::cout<<"Appending is successfully done.\n";
		return;
	}

	if( Is_Exist(file_name) == false )
	{
		exc_list.push_front(file_name);
		std::cout<<"Appending is successfully done.\n";
		return;
	}

	std::cout<<file_name<<" is already in the list.\n";
	return;
}

void Except_list::Delete_File(char* file_name)
{
	std::list<std::string>::iterator iter1;
	std::list<std::string>::iterator iter2;

	if( Is_Empty() == true )
	{
		std::cout<<"List is empty. \n";
		return;
	}

	if( Is_Exist(file_name) == true )
	{
		if( file_name == *exc_list.begin() )
		{
			exc_list.pop_front();
			std::cout<<file_name<<" is successfully delete.\n";
			return;
		}

		iter1 = exc_list.begin();
		while( (*iter1 != file_name) )
		{
			if( iter1 == exc_list.end() )
				break;
			iter2 = iter1;
			iter1++;
		}

		if( *iter1 == file_name )
		{
			iter2 = exc_list.erase(iter1);
			std::cout<<file_name<<" is successfully delete.\n";
			return;
		}
	}
	else
	{
		std::cout<<file_name<<" is not exist in the list.\n";
		return;
	}
}

void Except_list::Change_List(char* befo_name, char* after_name)
{
	std::list<std::string>::iterator iter;

	if( Is_Empty() == true )
	{
		std::cout<<befo_name<<" is not exist in the list.\n";
		return;
	}
	
	if( Is_Exist(befo_name) == true )
	{
		iter = exc_list.begin();
		while( *iter != befo_name )
		{
			if( iter == exc_list.end() )
				break;
			iter++;
		}
		if( *iter == befo_name )
		{
			*iter = after_name;
			std::cout<<befo_name<< "is successfully changed.\n";
			return;
		}
		std::cout<<befo_name<<" is not exist in the list.\n";
		return;
	}
	else
	{
		std::cout<<befo_name<<" is not exist in the list.\n";
		return;
	}
}

void Except_list::Display()
{
	std::list<std::string>::iterator iter;
	if( Is_Empty() == true )
	{
		std::cout<<"List is empty.\n";
		return;
	}

	std::cout<<"Except List\n";
	std::cout<<"====================================================\n";
	for( iter = exc_list.begin() ; iter != exc_list.end() ; iter++ )
		std::cout<<*iter<<" ";
	std::cout<<"\n====================================================\n";
}
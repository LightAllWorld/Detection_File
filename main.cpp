#include <iostream>
#include <string>
#include "Switch_Program.h"
#include "Except_list.h"
#include "Defence.h"

#define FILE_NAME_SIZE 100

int main(int argc, char const *argv[])
{
	On_Off prog_state;
	Control defence;

	std::string path;
	std::string refresh;

	std::string command;

	system("clear");
	while(1)
	{
		std::cout<<"Enter the mode. Modify Except list(1), Program on/off(2), Detect file(3), Quit(4).\n";
		std::cin>>command;

		// Modify list mode
		if( command.compare("1") == 0 )
		{
			while(1)
			{
				if ( prog_state.get_state() == false )
				{
					std::cout<<"Program is sleep mode. Please turn on program.\n";
					break;
				}

				// Attribute
				char file_name[FILE_NAME_SIZE];
				char befo_name[FILE_NAME_SIZE];
				char after_name[FILE_NAME_SIZE];
				std::string list_command;
				Except_list* modify = Except_list::get_Inst();

				// UI
				std::cout<<"Append(1), Delete(2), Change(3), Show(4), Return(5)\n";
				std::cin>>list_command;

				if( list_command.compare("1") == 0 )
				{
					std::cout<<"Enter the file name for appending.\n";
					std::cin>>file_name;
					modify->Append_File(file_name);

				}
				else if( list_command.compare("2") == 0 )
				{
					std::cout<<"Enter the file name for deleting.\n";
					std::cin>>file_name;
					modify->Delete_File(file_name);
				}
				else if( list_command.compare("3") == 0 )
				{
					std::cout<<"Enter the before file name.\n";
					std::cin>>befo_name;
					std::cout<<"Enter the after file name.\n";
					std::cin>>after_name;
					modify->Change_List(befo_name, after_name);
				}
				else if ( list_command.compare("4") == 0 )
				{
					modify->Display();
				}
				else if ( list_command.compare("5") == 0 )
					break;

				else
				{
					std::cout<<"Bad command!.\n";
				}

				std::cout<<"If you enter the anythings, than screen is cleared.\n";
				std::cin>>refresh;
				system("clear");
			}
		}
		// On/Off mode
		else if( command.compare("2") == 0 )
		{
			std::string switch_command;

			std::cout<<"Enter the command Turn On(1), Turn Off(2), Return(3).\n";
			std::cin>>switch_command;

			if( switch_command.compare("1") == 0 )
			{
				prog_state.Turn_On();
			}

			else if ( switch_command.compare("2") == 0 )
			{
				prog_state.Turn_Off();
			}

			else if ( switch_command.compare("3") == 0 )
			{
				break;
			}

			else
			{
				std::cout<<"Bad command.\n";
			}

			std::cout<<"If you enter the anythings, than monitor is cleared\n";
			std::cin>>refresh;
			system("clear");
		}
		// Detect file
		else if( command.compare("3") == 0 )
		{
			while(1)
			{
				if ( prog_state.get_state() == false )
				{
					std::cout<<"Program is sleep mode. Please turn on program.\n";
					break;
				}

				std::string defence_command;
				std::string dir;

				std::cout<<"Enter the command. Simple Mode(1), High Mode(2), Quit(3)\n";
				std::cin>>defence_command;

				if( defence_command.compare("1") == 0 )
				{
					std::cout<<"Input the path.\n";
					std::cin>>dir;
					defence.Set_Directory(dir);
					defence.SimpleMode();
				}

				else if( defence_command.compare("2") == 0 )
				{
					std::string option;

					std::cout<<"Input the path.\n";
					std::cin>>dir;
					defence.Set_Directory(dir);
					std::cout<<"Selcet the options.\n";
					std::cin>>option;

					defence.Set_Option(option);
					defence.Advenced_Mode();
				}

				else if( defence_command.compare("3") == 0 )
				{
					break;
				}

				else
				{
					std::cout<<"Bad Command.\n";
				}
				std::cout<<"If you enter the anythings, than monitor is cleared\n";
				std::cin>>refresh;
				system("clear");
			}
		}

		// Quit
		else if ( command.compare("4") == 0 )
			break;

		// bad command 
		else
		{
			std::cout<<"Bad Command.\n";
			std::cout<<"If you enter the anythings, than monitor is cleared\n";
			std::cin>>refresh;
			system("clear");
		}
	}

	return 0;
}
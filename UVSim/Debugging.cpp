#include "Debugging.h"

void Debugging::memDump()
{
	for (int i = 0; i < 10; i++)
	{
		if (i == 0) {
			std::cout << "/t";
		}
		else {
			std::cout << "0" << i << "/t";
		}
		for (int j = 0; j < 10; j++)
		{
			if (j == 0) {
				std::cout << "0" << i << "/t";
			}
			else {
				std::cout << "str /t";
			}
		}
	}
}

bool Debugging::sBreak(std::string userInput)
{
	if (userInput == stop) {
		std::cout << "end of program";
		return true;
	}
	else {
		return false;
	}
}

void Debugging::sContinue(int address)
{
	int pointer = address;
	std::cout << "pointer is " << pointer;
}

#include "pch.h"
#include "Debugging.h"

void Debugging::memDump()
{
	std::cout << "\n";
	std::cout << "MEMORY: ";
	std::cout << "\n";
	for (int i = -1; i < 10; i++)
	{
		std::cout << "\n";
		if (i < 0) {
			std::cout << "\t";
		}
		else {
			std::cout << i << "0" << "\t";
		}
		for (int j = -1; j < 9; j++)
		{
			if (i == -1) {
				std::cout << "0" << j + 1 << "\t";
			}
			else{
				std::cout << "00000 \t";
			}
		}
	}
	std::cout << "\n";
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
	std::cout << "pointer is at address" << pointer;
}
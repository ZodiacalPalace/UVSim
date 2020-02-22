#pragma once
#include <string>
#include <iostream>

class Debugging{
private:
	std::string stop = "-99999";
public:
	void memDump();
	bool sBreak(std::string userInput);
	void sContinue(int address);

};
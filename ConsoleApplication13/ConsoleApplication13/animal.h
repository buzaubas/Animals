#pragma once
#include <iostream>

class animal
{
private:
	std::string name;
public:
	animal();
	animal(const char* nm);
	std::string get_name();
};


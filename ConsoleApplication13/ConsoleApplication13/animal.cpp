#include "animal.h"

animal::animal()
{
}

animal::animal(const char* nm)
{
	name = nm;
}

std::string animal::get_name()
{
	return name;
}

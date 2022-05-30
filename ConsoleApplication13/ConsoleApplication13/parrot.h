#pragma once
#include <iostream>
#include "animal.h"
class parrot : animal
{
private:
	size_t wings;
public:
	parrot();
	parrot(const char* nm, size_t wg);
	void show();
};

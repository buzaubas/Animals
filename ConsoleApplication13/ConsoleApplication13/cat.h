#pragma once
#include <iostream>
#include "animal.h"
class cat : animal
{
private:
	size_t legs;
	bool tail;
public:
	cat();
	cat(const char* nm, size_t lg, bool tl);
	void show();
};


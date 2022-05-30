#pragma once
#include <iostream>
#include "animal.h"
class dog : animal
{
private:
	size_t legs;
	bool tail;
public:
	dog();
	dog(const char* nm, size_t lg, bool tl);
	void show();
};


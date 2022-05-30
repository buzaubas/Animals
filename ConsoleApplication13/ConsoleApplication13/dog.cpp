#include "dog.h"

dog::dog()
{
}

dog::dog(const char* nm, size_t lg, bool tl) : animal(nm)
{
	legs = lg;
	tail = tl;
}

void dog::show()
{
	std::cout << get_name() << " is dog" << ". It has " << legs << " legs" << " and " << ((tail == true) ? "tail" : "no tail");
}

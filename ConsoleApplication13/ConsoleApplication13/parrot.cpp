#include "parrot.h"

parrot::parrot()
{
}

parrot::parrot(const char* nm, size_t wg) : animal(nm)
{
	wings = wg;
}

void parrot::show()
{
	std::cout << get_name() << " is parrot" << ". It has " << wings << " wings.";
}

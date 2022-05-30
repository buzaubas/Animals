#include "cat.h"

cat::cat()
{
}

cat::cat(const char* nm, size_t lg, bool tl) : animal(nm)
{
	legs = lg;
	tail = tl;
}

void cat::show()
{
	std::cout << get_name() << " is cat" << ". It has " << legs << " legs" << " and " << ((tail == true) ? "tail" : "no tail");
}

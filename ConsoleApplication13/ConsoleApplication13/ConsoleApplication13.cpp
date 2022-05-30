#include <iostream>
#include "cat.h"
#include "dog.h"
#include "parrot.h"

using namespace std;

int main()
{
    cat Bob("Bob", 4, true);
    Bob.show();

    std::cout << "\n----------------------------" << std::endl;

    dog Rodger("Rodger", 3, false);
    Rodger.show();

    std::cout << "\n----------------------------" << std::endl;

    parrot Bayan("Bayan", 2);
    Bayan.show();

    std::cout << "\n----------------------------" << std::endl;
}
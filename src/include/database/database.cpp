#include "database.h"
#include <iostream>

database::database()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

database::~database()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void database::do_stuff()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());

    auto it = retval.begin();  
    std::for_each(people.rbegin(), people.rend(), [&it](Human& person) {
        person.birthday();  
        *it = person.isMonster() ? 'n' : 'y';  
        ++it;  
    });
    

    return retval;
}

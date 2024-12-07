#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());

    auto it=retval.rbegin();
    std::transform(people.rbegin(), people.rend(),it, [](Human& person){
        person.birthday();

        if(person.isMonster())
        {
            return 'n';
        }
        else
        {
            return 'y';
        }
    });

    return retval;
}

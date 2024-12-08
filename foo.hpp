#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
#include <algorithm>



std::vector< char > foo(std::list< Human >& people)
{
	std::vector<char> retval;
	retval.reserve(people.size());


	std::for_each(people.begin(), people.end(), [](Human& human) {human.birthday();});
	
	std::transform(people.rbegin(), people.rend(), std::back_inserter(retval), [](const Human& human){return human.isMonster() ? 'n' : 'y';});

    	return retval;
}

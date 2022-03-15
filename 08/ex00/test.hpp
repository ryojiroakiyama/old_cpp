#ifndef TEST_HPP
#define TEST_HPP

#include "escape_sequence.hpp"
#include <iostream>

static void	ColorMessage(const std::string color, const std::string message)
{
	std::cout << color << message << RESET << std::endl;
}

template <typename T>
void	exec(const T& container, const int target)
{
	try
	{
		if (*easyfind(container, target) == target) {
			ColorMessage(GREEN, "element found");
		} else {
			ColorMessage(RED, "no element, no exception");
		}
	}
	catch(const NotFound& e)
	{
		ColorMessage(MAGENTA, e.what());
	}
}

template <typename T>
void	test(const int elementSize, const int target)
{
	T container;
	for (int i = 0; i < elementSize; i++)
		container.insert(container.begin(), i);
	exec(container, target);
}

#endif
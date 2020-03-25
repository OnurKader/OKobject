#include "Object.hpp"

#include <iostream>

int main()
{
	OK::Object obj;
	obj.set("everything", 42);

	std::cout << obj["everything"].as<int>() << std::endl;

	return 0;
}

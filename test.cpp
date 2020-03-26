#include "Object.hpp"

#include <iostream>

int main()
{
	OK::Object obj;
	obj.set("everything", 42);
	obj.set("Hmm", -69.420f);
	obj["Hello"] = 'a';
	obj["Hello"] = OK::Value('n');
	obj.set("Hello", 'p');

	std::cout << obj["everything"].as<int>() << std::endl;
	std::cout << obj["Hmm"].as<float>() << std::endl;
	std::cout << obj.get("Hello").value().as<char>() << std::endl;

	return 0;
}

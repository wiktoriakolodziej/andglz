#pragma once
#include <string>


class Animal {
private:
	std::string species;
public:
	Animal(std::string name) {
		species = name;
	}
	void reachOut();
};

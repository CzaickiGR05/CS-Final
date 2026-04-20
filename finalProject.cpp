#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

#include "finalProj_items.h"

void checkout() {

}

void item::viewStock() {

}

void item::viewCart() {

}

void item::addItem() {

}


int exit() {
	return 0;
}

int main() {
	int options = 0;
	std::string input;

	std::getline(std::cin, input);
	try {
		options = std::stoi(input);
	}
	catch(std::exception& e){
		throw std::exception("Input must be an integer between 1 and 5");
	}

	if (options == 5) {
		exit();
	}






	return 0;
}
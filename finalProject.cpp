#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

#include "items.h"

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

void writeReceipt() {

	std::ofstream file;
	file.open("Receipt.txt");

	if (file.is_open()) {
		file << "Contains" << std::endl;
		file.close();
	}
	else {
		std::cout << "file not opened" << std::endl;
	}
}

void readInventory() {
	std::string line;
	std::ifstream file;
	file.open("inventory.txt");
	if (file.is_open()) {

		while (std::getline(file, line)) {
			std::cout << line << std::endl;
		}
		file.close();
	}
	else {
		std::cout << "file not opened" << std::endl;
	}

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

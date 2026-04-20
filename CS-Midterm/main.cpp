#include <iostream>
#include <string>
#include <iomanip>

int main() {

	std::cout << std::setprecision(2);

	int input = 0;

	std::string itemNames[8] = { "Giant Gummy Snake",
	"Nintendo Switch 2", "Playstation 5", "Joe Dirt DVD",
	"Framed Portrait of Danny Devito",
	"Used Framed Portrait of Danny Devito",
	"Death Stranding 2 PS5", "Bubonic Plague Vial" };

	double itemPrices[8] = { 14.99, 499.99, 549.99, 4.99, 999.99,
	998.99, 69.99, 0.99 };

	int itemStock[8] = { 5, 10, 7, 2, 1, 1, 6, 2000 };

	while (input != 5) {
		std::cout << "STORE MAIN MENU (Please select from the following options):" << std::endl;
		std::cout << "1) Add an item to your cart" << std::endl;
		std::cout << "2) View your current cart" << std::endl;
		std::cout << "3) View our item stock" << std::endl;
		std::cout << "4) Check out" << std::endl;
		std::cout << "5) Exit store" << std::endl;

		std::cout << std::endl;

		std::string temp;
		std::cout << "Enter a number: ";

		std::getline(std::cin, temp);
		try {
			input = std::stoi(temp);
		}
		catch (std::exception&) {
			std::cout << "Error: Please enter a number." << std::endl;
			return 1;
		}
	}

	std::cout << std::endl;
	std::cout << "Have a lovely day!" << std::endl;

	return 0;
}
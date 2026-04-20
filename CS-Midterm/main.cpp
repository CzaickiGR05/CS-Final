#include <iostream>
#include <string>

int main() {

	int input = 0;

	while (input != 5) {
		std::cout << "STORE MAIN MENU (Please select from the following options):" << std::endl;
		std::cout << "1) Add an item to your cart" << std::endl;
		std::cout << "2) View your current cart" << std::endl;
		std::cout << "3) View all items" << std::endl;
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
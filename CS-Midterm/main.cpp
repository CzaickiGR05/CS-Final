#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

// Strech Goals Implemented: 1(vector cart), 10(Malicious Input)

void listItems(std::string names[], double prices[], int stock[]) {

	std::cout << "Available Stock: " << std::endl;

	for (int i = 1; i <= 8; i++) {
		std::cout << i << ") " << names[i - 1] << " ($" << prices[i - 1] << ")" << " - Stock: " << stock[i - 1] << std::endl;
	}

	std::cout << std::endl;
}

void listCart(std::vector<std::string> cart, std::string names[], double prices[], int input) {

	double total = 0;

	for (std::string item : cart) {
		std::cout << item;
		for (int i = 0; i < 8; i++) {
			if (item == names[i]) {
				std::cout << " ($" << prices[i] << ")" << std::endl;
				if (input == 4) {
					total += prices[i];
				}
			}
		}
		
	}

	if (input == 4) {
		std::cout << "TOTAL: $" << total << std::endl;
	}
}

int main() {

	std::cout << std::fixed << std::setprecision(2);

	int input = 0;

	std::string itemNames[8] = { "Giant Gummy Snake",
	"Nintendo Switch 2", "Playstation 5", "Joe Dirt DVD",
	"Framed Portrait of Danny Devito",
	"Used Framed Portrait of Danny Devito",
	"Death Stranding 2 PS5", "Bubonic Plague Vial" };

	double itemPrices[8] = { 14.99, 499.99, 549.99, 4.99, 999.99,
	998.99, 69.99, 0.99 };

	int itemStock[8] = { 5, 10, 7, 2, 1, 1, 6, 2000 };

	std::vector<std::string> userCart;

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
			if (input < 1 || input > 5) {
				std::cout << std::endl;
				std::cout << "Please enter a valid input." << std::endl;
				std::cout << std::endl;
			}
		}
		catch (std::exception&) {
			std::cout << std::endl;
			std::cout << "Please enter a valid input." << std::endl;
			std::cout << std::endl;
		}

		if (input == 1) {

			listItems(itemNames, itemPrices, itemStock);

			bool valid = false;

			std::cout << "Please enter the name of the item you would like to add to your cart EXACTLY as it is seen in the list above: ";
			std::getline(std::cin, temp);

			for (int i = 0; i < 8; i++) {
				if (temp == itemNames[i]) {
					if (itemStock[i] > 0) {
						std::cout << itemNames[i] << " has been added to your cart!" << std::endl;
						userCart.push_back(itemNames[i]);
						itemStock[i]--;
						valid = true;
					}
					else {
						std::cout << std::endl;
						std::cout << "Sorry that item is out of stock!" << std::endl;
						valid = true;
					}
				}
			}

			if (valid == false) {
				std::cout << std::endl;
				std::cout << "Please enter a valid item." << std::endl;
			}

			std::cout << std::endl;
		}

		else if (input == 2) {
			if (userCart.empty()) {
				std::cout << "Your cart is empty. Please add at least one item to your cart before using this feature." << std::endl;
			}
			listCart(userCart, itemNames, itemPrices, input);
			std::cout << std::endl;
		}

		else if (input == 3) {
			listItems(itemNames, itemPrices, itemStock);
		}

		else if (input == 4) {
			if (!userCart.empty()) {
				std::cout << std::endl;
				std::cout << "Thank you for shopping with us!" << std::endl;
				std::cout << std::endl;
				std::cout << "YOUR RECIEPT:" << std::endl;
				listCart(userCart, itemNames, itemPrices, input);
				input = 5;
			}
			else {
				std::cout << std::endl;
				std::cout << "Please add some of our items to your cart before checking out!" << std::endl;
				std::cout << std::endl;
			}
		}

	}

	std::cout << std::endl;
	std::cout << "Have a lovely day!" << std::endl;

	return 0;
}
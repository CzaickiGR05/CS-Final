#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <windows.h>

int main() {

	for (bool loopManager = 1;;) {

		std::string restart;
		std::string input;
		double value;

		system("Color 02");
		std::cout << std::fixed << std::setprecision(3);

		std::cout << "Welcome to CPP standard metric conversion! Please select which unit you would like to convert to:" << std::endl;

		std::cout << "Type [m] for metric" << std::endl;
		std::cout << "Type [s] for standard" << std::endl;
		std::string type;
		std::getline(std::cin, type);
		if (type == "m") {
			system("Color 04");
			std::cout << std::endl;
			std::cout << "Metric Measurement Selected." << std::endl;
			std::cout << std::endl;
			std::cout << "What are you converting?" << std::endl;
			std::cout << "Type [d] for distance (Feet to Meters)" << std::endl;
			std::cout << "Type [m] for mass (Pounds to Grams)" << std::endl;
			std::cout << "Type [t] for temperature (Fahrenheit to Celcius)" << std::endl;
			std::string unit;
			std::getline(std::cin, unit);

			if (unit == "d") {
				std::cout << std::endl;
				std::cout << "Feet to Meter Conversion Selected." << std::endl;
				std::cout << std::endl;

				std::string feetInput;
				double saveFeet;
				std::cout << "Please enter the amount of feet you would like to convert: ";
				std::getline(std::cin, feetInput);

				try {
					saveFeet = std::stod(feetInput);
				}
				catch (std::exception& e) {
					std::cout << "Value must be a number!" << std::endl;
					return 3;
				}

				double Feet2Meter = saveFeet * 0.3048;
				std::cout << saveFeet << " feet is equal to " << Feet2Meter << " meters!" << std::endl;
				
				std::cout << std::endl;
				std::cout << "Would you like to restart? Y/N: ";
				std::getline(std::cin, restart);

				if (restart == "Y") {
					std::cout << std::endl;
				}
				else if (restart == "N") {
					std::cout << "END OF PROGRAM." << std::endl;
					loopManager = 0;
					return 0;
				}
				else {
					std::cout << "INVALID INPUT! Enter either Y or N." << std::endl;
					loopManager = 0;
					return 1;
				}
			}

			else if (unit == "m") {
				std::cout << std::endl;
				std::cout << "Pounds to Grams Conversion Selected." << std::endl;
				std::cout << std::endl;

				std::string poundInput;
				double savePound;
				std::cout << "Please enter the amount of pounds you would like to convert: ";
				std::getline(std::cin, poundInput);

				try {
					savePound = std::stod(poundInput);
				}
				catch (std::exception& e) {
					std::cout << "Value must be a number!" << std::endl;
					return 3;
				}

				double Pound2Gram = savePound * 453.592;
				std::cout << savePound << " lbs is equal to " << Pound2Gram << " grams!" << std::endl;
				
				std::cout << std::endl;
				std::cout << "Would you like to restart? Y/N: ";
				std::getline(std::cin, restart);

				if (restart == "Y") {
					std::cout << std::endl;
				}
				else if (restart == "N") {
					std::cout << "END OF PROGRAM." << std::endl;
					loopManager = 0;
					return 0;
				}
				else {
					std::cout << "INVALID INPUT! Enter either Y or N." << std::endl;
					loopManager = 0;
					return 1;
				}
			}

			else if (unit == "t") {
				std::cout << std::fixed << std::setprecision(1);
				std::cout << std::endl;
				std::cout << "Fahrenheit to Celcius Selected." << std::endl;
				std::cout << std::endl;

				std::string FInput;
				double saveF;
				std::cout << "Please enter the temperature in Fahrenheit you would like to convert: ";
				std::getline(std::cin, FInput);

				try {
					saveF = std::stod(FInput);
				}
				catch (std::exception& e) {
					std::cout << "Value must be a number!" << std::endl;
					return 3;
				}

				double F2C = (saveF - 32) / 1.8;
				std::cout << saveF << "F is equal to " << F2C << "C!" << std::endl;
				
				std::cout << std::endl;
				std::cout << "Would you like to restart? Y/N: ";
				std::getline(std::cin, restart);

				if (restart == "Y") {
					std::cout << std::endl;
				}
				else if (restart == "N") {
					std::cout << "END OF PROGRAM." << std::endl;
					loopManager = 0;
					return 0;
				}
				else {
					std::cout << "INVALID INPUT! Enter either Y or N." << std::endl;
					loopManager = 0;
					return 1;
				}
			}

			else {
				std::cout << "INVALID INPUT! Please enter [d], [m], or [t]." << std::endl;
				return 2;
			}
		}
		else if (type == "s") {
			system("Color 06");
			std::cout << std::endl;
			std::cout << "Standard Measurement Selected." << std::endl;
			std::cout << std::endl;
			std::cout << "What are you converting?" << std::endl;
			std::cout << "Type [d] for distance (Meters to Feet)" << std::endl;
			std::cout << "Type [m] for mass (Grams to Pounds)" << std::endl;
			std::cout << "Type [t] for temperature (Celcius to Farenheit)" << std::endl;
			std::string unit;
			std::getline(std::cin, unit);

			if (unit == "d") {
				std::cout << std::endl;
				std::cout << "Meters to Feet Conversion Selected." << std::endl;
				std::cout << std::endl;

				std::string meterInput;
				double saveMeter;
				std::cout << "Please enter the amount of meters you would like to convert: ";
				std::getline(std::cin, meterInput);

				try {
					saveMeter = std::stod(meterInput);
				}
				catch (std::exception& e) {
					std::cout << "Value must be a number!" << std::endl;
					return 3;
				}

				double Meter2Feet = saveMeter / 0.3048;
				std::cout << saveMeter << " meters is equal to " << Meter2Feet << " feet!" << std::endl;
				
				std::cout << std::endl;
				std::cout << "Would you like to restart? Y/N: ";
				std::getline(std::cin, restart);

				if (restart == "Y") {
					std::cout << std::endl;
				}
				else if (restart == "N") {
					std::cout << "END OF PROGRAM." << std::endl;
					loopManager = 0;
					return 0;
				}
				else {
					std::cout << "INVALID INPUT! Enter either Y or N." << std::endl;
					loopManager = 0;
					return 1;
				}
			}

			else if (unit == "m") {
				std::cout << std::endl;
				std::cout << "Grams to Pounds Conversion Selected." << std::endl;
				std::cout << std::endl;

				std::string gramInput;
				double saveGram;
				std::cout << "Please enter the amount of grams you would like to convert: ";
				std::getline(std::cin, gramInput);

				try {
					saveGram = std::stod(gramInput);
				}
				catch (std::exception& e) {
					std::cout << "Value must be a number!" << std::endl;
					return 3;
				}

				double Gram2Pound = saveGram / 453.592;
				std::cout << saveGram << " grams is equal to " << Gram2Pound << " lbs!" << std::endl;
				
				std::cout << std::endl;
				std::cout << "Would you like to restart? Y/N: ";
				std::getline(std::cin, restart);

				if (restart == "Y") {
					std::cout << std::endl;
				}
				else if (restart == "N") {
					std::cout << "END OF PROGRAM." << std::endl;
					loopManager = 0;
					return 0;
				}
				else {
					std::cout << "INVALID INPUT! Enter either Y or N." << std::endl;
					loopManager = 0;
					return 1;
				}
			}

			else if (unit == "t") {
				std::cout << std::fixed << std::setprecision(1);
				std::cout << std::endl;
				std::cout << "Celcius to Farenheit Selected." << std::endl;
				std::cout << std::endl;

				std::string CInput;
				double saveC;
				std::cout << "Please enter the temperature in Celcius you would like to convert: ";
				std::getline(std::cin, CInput);

				try {
					saveC = std::stod(CInput);
				}
				catch (std::exception& e) {
					std::cout << "Value must be a number!" << std::endl;
					return 3;
				}

				double C2F = (saveC * 1.8) + 32;
				std::cout << saveC << "C is equal to " << C2F << "F!" << std::endl;

				std::cout << std::endl;
				std::cout << "Would you like to restart? Y/N: ";
				std::getline(std::cin, restart);
				
				if (restart == "Y") {
					std::cout << std::endl;
				}
				else if (restart == "N") {
					std::cout << "END OF PROGRAM." << std::endl;
					loopManager = 0;
					return 0;
				}
				else {
					std::cout << "INVALID INPUT! Enter either Y or N." << std::endl;
					loopManager = 0;
					return 1;
				}
			}

			else {
				std::cout << "INVALID INPUT! Please enter [d], [m], or [t]." << std::endl;
				return 2;
			}
		}
		else {
			std::cout << "INVALID INPUT! Please enter either [m] or [s]." << std::endl;
			return 1;
		}
	}

	return 0;
}

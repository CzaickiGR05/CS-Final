#pragma once

struct item{

private:
	
	std::string name;
	double price;
	int inStock;

public:
	void addItem();
	void viewCart();
	void viewStock();

};

struct cart{
public:

	std::string contents[];
};
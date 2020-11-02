#ifndef PRICE_LIST_H
#define PRICE_LIST_H

#include<iostream>
#include<map>

using namespace std;

class Price_List {

	private:
		string prod[6] = {"Roast Beef", "Pastrami", "Salami", "Pickles", "Black Olives", "Green Olives"}; //The string type array
	    double price[6] = {10.00, 20.50, 30.20, 54.80, 81.50, 32.00};
	    map<string, double> pricing;

	public:
		// Assignes default values to the map
		Price_List() {
			for(int i = 0; i < 6; i++) {
				pricing.insert(pair<string, double>(prod[i], price[i]));
			}
		}
		// Set price for a specific product
		void set_price(string product, double updatedPrice) {
			map<string, double>::iterator i;
			i = pricing.find(product);
			if(i != pricing.end()) {
				i->second = updatedPrice;
				return;
			}
			cout << "Item is not there in the shop's list so can't update the price sorry." << endl;
		}
		// Get price for a specific product
		double get_price(string product) {
			map<string, double>::iterator i;
			i = pricing.find(product);
			if(i != pricing.end()) {
				return i->second;
			}
			cout << "Item not found in the list!" << endl;
			return 0.00;
		}
		// Print price list of all products
		void print_price() {
			map<string, double>::iterator i;
			cout << "\nProduct\t\tPricing" << endl;
			cout << "-------\t\t-------" << endl;
			for(i = pricing.begin(); i != pricing.end(); ++i) {
				if(i->first.length() >= 8) {
					cout << i->first << "\t";
				}
				else {
					cout << i->first << "\t\t";
				}
				printf("Rs.%.2f\n", i->second);
			}
		}
		// For adding items to price list
		void add_item(string product, double price) {
			pricing.insert(pair<string, double>(product, price));
			cout << "Item added successfully!" << endl;
			cout << "NEW LIST" << endl;
			print_price();
		}
		// For deleting items from price list
		void delete_item(string product) {
			map<string, double>::iterator i;
			i = pricing.find(product);
			if(i != pricing.end()) {
				pricing.erase(product);
				cout << "Item deleted successfully!" << endl;
				cout << "NEW LIST" << endl;
				print_price();
				return;
			}
			cout << "Item not found!" << endl;
		}
};

#endif
#include<iostream>
#include<map>

using namespace std;

class Price_List {
	
	private: 
		string prod[6] = {"Roast Beef", "Pastrami", "Salami", "Pickles", "Black Olives", "Green Olives"}; //The string type array
	    double price[6]={10.00, 20.50, 30.20, 54.80, 81.50, 32.0};
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
			for(i = pricing.begin(); i != pricing.end(); ++i) {
				if(product == i->first) {
					i->second = updatedPrice;
				}
			}
		}
		// Get price for a specific product 
		double get_price(string product) {
			map<string, double>::iterator i;
			for(i = pricing.begin(); i != pricing.end(); ++i) {
				if(product == i->first) {
					return i->second;
				}
			}
			return 0.00;
		}
		// Print price list of all products
		void print_price() {
			map<string, double>::iterator i;
			cout << "Product\t\tPricing" << endl;
			for(i = pricing.begin(); i != pricing.end(); ++i) {
				cout << i->first << "\t" << i->second << endl;
			}
		}
		
};
#include<iostream>
#include<bits/stdc++.h>
#include<map>

using namespace std; 

class Price_List {
	
	private: 
		string prod[6] = {"Roast Beef", "Pastrami", "Salami", "Pickles", "Black Olives", "Green Olives"}; //The string type array
	    int price[6]={10,20,30,54,81,32};
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
			return 0;
		}
		
		// Print price list of all products
		void print_price() {
			map<string, double>::iterator i;
			cout<<"Product\tPricing"<<endl;
			for(i = pricing.begin(); i != pricing.end(); ++i) {
				cout << i->first << "\t" << i->second << endl;
			}
		}
		
};

/*int main() {
	Price_List priceList;
	// Print the initial price of all the items in the list 
	cout << "Initial Price List: " << endl;
	priceList.print_price();
	// Set price of a particular product in the list 
	string product; 
	double price; 
	cout << "Enter the product name whose price is to be set: "; 
	cin >> product; 
	cout << "Enter the price that you want to set of " << product << " : ";
	cin >> price; 
	priceList.set_price(product, price);
	// Print the list after updation
	cout << "Modified Price List: " << endl; 
	priceList.print_price();
	// Get price of a praticular product
	cout << "Enter the proudct name: ";
	cin >> product; 
	cout << "The price of " << product << " is: " << priceList.get_price(product) << endl;
	return 0;
}*/

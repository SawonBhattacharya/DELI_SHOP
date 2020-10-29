#include<iostream>
#include<bits/stdc++.h>

using namespace std; 

class Scale {
	private: 
		// Initially the user will place a random quantity in the scale
		double currentQuantity = 0; 
	
	public: 
		double getWeight() {
			return currentQuantity;
		}		
		
		void addWeight(double quantity) {
			/*if(quantity == currentQuantity) {
				cout << "You can place this item in cart!!" << endl;
				return;
			}*/
			//cout << "You need to add " << (quantity - currentQuantity) << " units more to the scale" << endl;
			currentQuantity = currentQuantity + quantity; 
			//addWeight(quantity);
		}
		
		void subtractWeight(double quantity) {
			if((currentQuantity - quantity) < 0) {
				cout << "To high to subtract!" << endl;
				return;
			}
			//cout << "You need to remove " << (currentQuantity - quantity) << " units from the scale" << endl;
			currentQuantity = currentQuantity - quantity; 
			//subtractWeight(quantity);
		}
		
		void zeroWeight() {
			currentQuantity = 0;
		}
};

int main() {
	
	string productName; 
	double quantity; 
	double currentWeight;
	Scale scale; 
	
	
	cout << "Enter the product name: "; 
	cin >> productName; 
	cout << "Enter the quantity of " << productName << " required: ";
	cin >> quantity;
	
	currentWeight = scale.getWeight();
	cout << "The initial weight in the scale is: " << currentWeight << endl;
	
	scale.addWeight(quantity);
	
	cout << "Enter the quantity to add: ";
	cin >> quantity; 
	scale.addWeight(quantity);
	
	cout << "Enter the quantity to subtract: ";
	cin >> quantity; 
	scale.subtractWeight(quantity);
	
	currentWeight = scale.getWeight();
	cout << "Final weight in the scale is: " << currentWeight << endl;
	
	/*if(currentWeight > quantity) 
		scale.subtractWeight(quantity);
	else
		scale.addWeight(quantity);*/
	//scale.substractWeight()
	scale.zeroWeight();
		
	return 0;
}
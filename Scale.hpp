#ifndef SCALE_H
#define SCALE_H

#include<iostream>

using namespace std; 

class Scale {
	private: 
		// Initially the user will place a random quantity in the scale
		double currentQuantity;

	public:
		Scale() {
			currentQuantity = 0;
		}
		double getWeight() {
			return currentQuantity;
		}		
		void addWeight(double quantity) {
			currentQuantity += quantity; 
		}
		void subtractWeight(double quantity) {
			if((currentQuantity - quantity) < 0) {
				cout << "To high to subtract!" << endl;
				return;
			}
			currentQuantity -= quantity; 
		}
		void zeroWeight() {
			currentQuantity = 0;
		}
};

#endif
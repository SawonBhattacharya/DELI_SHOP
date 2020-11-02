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
		//For getting scale weight
		double getWeight() {
			return currentQuantity;
		}
		//For adding weight to scale		
		void addWeight(double quantity) {
			currentQuantity += quantity; 
		}
		//For deleting weight to scale
		void subtractWeight(double quantity) {
			if((currentQuantity - quantity) < 0) {
				cout << "To high to subtract!" << endl;
				return;
			}
			currentQuantity -= quantity; 
		}
		//For resetting scale
		void zeroWeight() {
			currentQuantity = 0;
		}
};
// C++ program to demonstrate function
// declaration outside class

#include <bits/stdc++.h>
using namespace std;
class Price_list
{
	private:
	    string prod[6] = {"Roast Beef", "Pastrami", "Salami","Pickles","Black Olives","Green Olives"}; //The string type array
	    int price[6]={10,20,30,54,81,32};
	    std::vector<std::pair<std::string,int>>pricing;
	public:

        Price_list(){

            //default pricing
            for(int i=0;i<6;i++){
                    pricing.push_back(std::make_pair(prod[i],price[i]));
            }
        }
        //set price (for a specific product)
        void set_price(string product){
        //if shopkeeper wants to change the price
            for(int i=0;i<6;i++){
                int update_price=0;
                if(pricing[i].first==product){
                    cout<<"Update the price of "<<pricing[i].first<<" : "<<endl;
                    cin>>update_price;
                    pricing[i].second=update_price;
                    break;
                }
            }
            cout<<"price has been updated!!!"<<endl;
        }
        // get price (for a specific product)
        int get_price(string product){
            for(int i = 0; i <6 ; i++){
                if(product==pricing[i].first)
                    return pricing[i].second;
            }
        }
        //print price list (including all products)(pair data structure)
        void print_price(){
           cout<<"Product\tPricing"<<endl;
           for(int i = 0; i <6 ; i++){
                std::cout << pricing[i].first;
                std::cout<<"\t";
                std::cout<<pricing[i].second<<endl;

           }
        }


};


int main() {

	Price_list obj1;


	// call printname()
	obj1.print_price();
	cout << endl;

    obj1.set_price("Pastrami");
    cout << endl;
    obj1.print_price();
	cout << endl;
    cout<<"Price of Roast Beef is: "<<obj1.get_price("Roast Beef");

	return 0;
}

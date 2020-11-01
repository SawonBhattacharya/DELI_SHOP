#ifndef CART_H
#define CART_H

#include<iostream>
#include<string>
#include<map>
#include<iterator>
#include"Scale.hpp"
#include"Revenue.hpp"
#include"Price_List.hpp"

using namespace std;

class Cart {

    private:
        Scale scale;
        Price_List list;
        map<string, double> cart;
        string product;

    public:
        Cart(Price_List& list) {
            scale.zeroWeight();
            cart.clear();
            this->list = list;
        }
        //Select product
        void sel_prod() {
            cout << "Select from the following: \n" <<  endl;
            list.print_price();
            cout << "\nEnter product name: ";
            cin.ignore();
            getline(cin, product);
            cout<<product<<" "<<list.get_price(product)<<endl;
            if(list.get_price(product)==0.0){
                    cout<<"Try to select from the product list."<<endl;
            }
            else{
                this->add_to_cart();
            }
        }
        //add to cart
        void add_to_cart() {
            int quantity, c;
            char c_a, c_s;
            if(product==""){
                cout<<"Select a Product from the list first."<<endl;

            }
            else{
                cout << "How much do you want? ";
                cin >> quantity;
                scale.addWeight(quantity);
                cout << "Present quantity: " << scale.getWeight() << endl;
                do {
                    cout << "Do you want add any weight?(y/n) ";
                    cin >> c_a;
                    if(c_a == 'y'){
                        cout << "How much do you want to add? ";
                        cin >> quantity;
                        scale.addWeight(quantity);
                    }
                    cout << "Do you want subtract any weight?(y/n) ";
                    cin >> c_s;
                    if(c_s == 'y'){
                        cout << "How much do you want to subtract? ";
                        cin >> quantity;
                        scale.subtractWeight(quantity);
                    }
                    cout << "Present quantity: " << scale.getWeight() << endl;
                    cout << "Want to change again? (1/0) ";
                    cin >> c;
                }while(c);
                double price = list.get_price(product);
                cart.insert(pair<string, double>(product, scale.getWeight()*price));
                cout<<"Your item "<<product<<" is added to the cart."<<endl;
                this->print_invoice();
            }
            scale.zeroWeight();
        }
        //print invoice so far (for packages in the cart in the order they were inserted)
        void print_invoice() {
            map<string, double>::iterator itr;

            if(cart.begin() == cart.end())
            	cout << "Oops!!!\t Cart \t is \t empty" << endl;
            else{
                cout << "INVOICE" << endl;
                cout << "PRODUCT\t\tQUANTITY\t\tPRICE" << endl;
                cout << "-------\t\t--------\t\t-----" << endl;
                for(itr = cart.begin(); itr != cart.end(); ++itr) {
                    cout << itr->first << "\t\t" << itr->second/list.get_price(itr->first) << "\t\t" << itr->second << endl;
                }
                cout << "\n";
            }
        }
        //Check out - buy cart content (and print an invoice)
        void check_out(Revenue& revenue) {

            this->print_invoice();
            map<string, double>::iterator itr;
            for(itr = cart.begin(); itr != cart.end(); ++itr) {
                revenue.set_tot_prod(itr->second/list.get_price(itr->first));
                revenue.set_tot_rev(itr->second);
                revenue.set_rev_prod(itr->first, itr->second);
            }
        }

};

#endif

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
            do {
                cout << "Select from the following: " <<  endl;
                list.print_price();
                cout << "\nEnter product name: ";
                getline(cin, product);
                if(list.get_price(product) > 0.0) {
                    cout << product << " ";
                    printf("Rs.%.2f\n", list.get_price(product));
                    break;
                }
                else {
                    cout << "Try to select from the product list." << endl;
                }
            }while(true);
        }
        //add to cart
        void add_to_cart() {
            int quantity, c;
            char c_a, c_s;
            if(product == ""){
                cout << "Select a product from the list first." << endl;
            }
            else{
                cout << "How much do you want? ";
                cin >> quantity;
                scale.addWeight(quantity);
                cout << "Present quantity: " << scale.getWeight() << endl;
                do {
                    cout << "Do you want add any weight? (y/n) ";
                    cin >> c_a;
                    if(c_a == 'y'){
                        cout << "How much do you want to add? ";
                        cin >> quantity;
                        scale.addWeight(quantity);
                    }
                    cout << "Do you want subtract any weight? (y/n) ";
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
                map<string, double>::iterator itr;
                itr = cart.find(product);
                if(itr != cart.end()) {
                    itr->second = itr->second + (scale.getWeight()*list.get_price(product));
                }
                else {
                    cart.insert(pair<string, double>(product, scale.getWeight()*list.get_price(product)));
                }
                cout << "Your item " << product << " has been added to the cart." << endl;
                product = "";
            }
            scale.zeroWeight();
        }
        //print invoice so far (for packages in the cart in the order they were inserted)
        void print_invoice() {
            map<string, double>::iterator itr;
            if(cart.begin() == cart.end())
            	cout << "Oops!!!\t Cart \t is \t empty" << endl;
            else{
                cout << "PRODUCT\t\tQUANTITY\tRATE(Rs)\tPRICE(Rs)" << endl;
                cout << "-------\t\t--------\t----\t\t-----" << endl;
                for(itr = cart.begin(); itr != cart.end(); ++itr) {
                    if(itr->first.length() >= 8) {
                        cout << itr->first << "\t";
                    }
                    else {
                        cout << itr->first << "\t\t";
                    }
                    cout << itr->second/list.get_price(itr->first) << "\t\t";
                    printf("%.2f\t\t", list.get_price(itr->first));
                    printf("%.2f\n", itr->second);
                }
                cout << "\n";
            }
        }
        //removes the current product fromm cart
        void remove_prod() {
            map<string, double>::iterator itr;
            string product;
            do {
                cout << "YOUR CART" << endl;
                print_invoice();
                cout << "\nEnter product name: ";
                cin.ignore();
                getline(cin, product);
                itr = cart.find(product);
                if(itr != cart.end()) {
                    cart.erase(product);
                    cout << "Item removed from cart!" << endl;
                }
                else {
                    cout << "Item not found in cart!\nPlease choose item from cart!" << endl;
                }
            }while(true);
        }
        //Check out - buy cart content (and print an invoice)
        void check_out(Revenue& revenue) {
            cout << "FINAL INVOICE" << endl;
            print_invoice();
            map<string, double>::iterator itr;
            for(itr = cart.begin(); itr != cart.end(); ++itr) {
                revenue.set_tot_prod(itr->second/list.get_price(itr->first));
                revenue.set_tot_rev(itr->second);
                revenue.set_rev_prod(itr->first, itr->second);
            }
        }
};

#endif
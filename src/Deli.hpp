#ifndef DELI_H
#define DELI_H

#include<iostream>
#include<string>
#include<map>
#include<iterator>
#include<queue>
#include"Cart.hpp"
#include"Scale.hpp"

using namespace std;

class Deli {

    private:
        queue<int> customer;
        int customer_id;
        int customer_id1;
        Revenue revenue;
        Price_List list;
        Scale scale;

    public:
        Deli() {
            customer_id = 0;
            customer_id1 = 0;
            revenue = Revenue();
            list = Price_List();
            scale = Scale();
        }
        void arrival() {
            if(customer.size() < 10) {
                customer_id = (++customer_id)%11;
                customer.push(customer_id);
                cout << "Customer Has been added!\n" << endl;
                return;
            }
            cout << "Queue Full!" << endl;
        }
        void select_customer() {
            int c = 0;
            if(customer.empty()) {
                cout << "Queue Empty!" << endl;
                return;
            }
            cout << "Serving customer: " << customer.front() << endl;
            Cart cart = Cart(list);
            do {
                cout << "\n1. Select Product\n2. Add to cart\n3. View Cart\n4. Check Out\n5. Remove from cart\n\nEnter choice: ";
                cin >> c;
                switch(c)
                {
                    case 1:
                        cart.sel_prod();
                        break;
                    
                    case 2:
                        cart.add_to_cart();
                        break;
                    
                    case 3:
                        cout << "YOUR CART" << endl;
                        cart.print_invoice();
                        break;

                    case 4:
                        cart.check_out(revenue);
                        break;
                        
                    case 5: 
                        cart.remove_prod();
                        break;

                    default:
                        break;
                }
            }while(c != 4);
            customer.pop();
            customer_id1++;
            cout << "Thank you customer: " << customer_id1 << "! Please visit again!" << endl;
            customer_id--;
        }
        void update_price() {
            string product;
            double price;
            char c;
            cout << "PRICE UPDATING SECTION" << endl;
            cout << "Enter q/Q to leave or anything else to continue: ";
            cin >> c;
            if(c == 'q' || c == 'Q') {
                return;
            }
            cout << "Enter item name: ";
            cin.ignore();
            getline(cin, product);
            cout << "Enter new price: ";
            cin >> price;
            list.set_price(product, price);
        }
        void report() {
            cout << "Total Products sold: " << revenue.get_tot_prod() << endl;
            cout << "Total Revenue per product: ";
            printf("Rs.%.2f", revenue.get_tot_rev());
            cout << endl;
            map<string, double> rev = revenue.get_rev_prod();
            map<string, double>::iterator itr;
            for(itr = rev.begin(); itr != rev.end(); ++itr) {
                if(itr->first.length() >= 8) {
                    cout << itr->first << "\t";
                }
                else {
                    cout << itr->first << "\t\t";
                }
                printf("Rs.%.2f\n", itr->second);
            }
            cout << "Total Revenue for the day: ";
            printf("Rs.%.2f\n", revenue.get_tot_rev());
        }
        void addItem() {
            string product;
            double price;
            cout << "Enter new item name: ";
            cin.ignore();
            getline(cin, product);
            cout << "Enter its price: ";
            cin >> price;
            list.add_item(product, price);
        }
        void removeItem() {
            string product;
            double price;
            cout << "Enter new item name: ";
            cin.ignore();
            getline(cin, product);
            list.delete_item(product);
        }
        void priceList() {
            list.print_price();
        }
};

#endif
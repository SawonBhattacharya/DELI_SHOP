#include<iostream>
#include<string>
#include<map>
#include<iterator>
#include"Scale.cpp"
#include"Revenue.cpp"
#include"Price_list.cpp"

using namespace std;

class Cart {
    private:
        Scale scale;
        Price_List list;
        map<string, double> cart;
        string product;

    public:
        Cart() {
            scale.zeroWeight();
            cart.clear();
        }
        //Select product
        void sel_prod() {
            cout << "Select from the following" <<  endl;
            list.print_price();
            cout << "\nEnter product name: " << endl;
            cin.ignore();
            getline(cin, product);
        }
        //add to cart
        void add_to_cart() {
            int quantity, c;
            cout << "How much do you want? ";
            cin >> quantity;
            scale.addWeight(quantity);
            cout << "Present quantity" << scale.getWeight() << endl;
            do {
                cout << "How much do you want to add?";
                cin >> quantity;
                scale.addWeight(quantity);
                cout << "How much do you want to subtract?";
                cin >> quantity;
                scale.subtractWeight(quantity);
                cout << "Present quantity" << scale.getWeight() << endl;
                cout << "Want to change again? (1/0)" << endl;
                cin >> c;
            }while(c);
            double price = list.get_price(product);
            cart.insert(pair<string, double>(product, scale.getWeight()*price));
            scale.zeroWeight();
        }
        //print invoice so far (for packages in the cart in the order they were inserted)
        void print_invoice() {
            map<string, double>::iterator itr;
            for(itr = cart.begin(); itr != cart.end(); ++itr) {
                cout << itr->first << "\t\t" << itr->second << endl;
            }
        }
        //Check out - buy cart content (and print an invoice)
        void check_out(Revenue revenue) {
            cout << "INVOICE\nPRODUCT\t\tPRICE" << endl;
            this->print_invoice();
            map<string, double>::iterator itr;
            for(itr = cart.begin(); itr != cart.end(); ++itr) {
                cout << itr->first << "\t\t" << itr->second << endl;
                revenue.set_tot_prod((int)itr->second/list.get_price(itr->first));
                revenue.set_tot_rev(itr->second);
                revenue.set_rev_prod(itr->first, itr->second);
            }
        }
};
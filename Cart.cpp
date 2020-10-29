#include<iostream>
#include<iterator>
#include<map>
#include<string>

using namespace std;

class Cart {
    private:
        map<string, double> cart;

    public:
        void sel_prod() {
            
        }
        void add_to_cart() {
            cart.insert(pair<string, double>("a", 10.7));
        }
        void print_invoice() {
            map<string, double>::iterator itr;
            for(itr = cart.begin(); itr != cart.end(); ++itr) {
                cout << itr->first << " " << itr->second << endl;
            }
        }
        void check_out() {
            cout << "Thank you for visiting us!" << endl;
            cout << "INVOICE\nPRODUCT\t\tPRICE" << endl;
            this->print_invoice();
        }
};


int main() {
    Cart c;
    c.add_to_cart();
    c.check_out();

    return 0;
}
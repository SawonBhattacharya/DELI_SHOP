#include<iostream>
#include<string>
#include<map>
#include<iterator>
#include<queue>
#include"Cart.cpp"

using namespace std;
class Deli {

private:
    queue<int> customer;
    int customer_id;
    Revenue revenue;

public:
    Deli() {
        cout << "Starting new day!!!" << endl;
        customer_id = 0;
        revenue = Revenue();
    }
    void arrival() {
        if(customer.size() < 10) {
            customer_id = (++customer_id)%11;
            customer.push(customer_id);
            cout << "Customer Has been added!" << endl;
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
        Cart cart;
        do {
            cout << "1. Select Product\n2. Add to cart\n3. Print Invoice\n4. Check Out\n\nEnter choice: ";
            cin >> c;
            switch (c)
            {
                case 1:
                    cart.sel_prod();
                    break;
                
                case 2:
                    cart.add_to_cart();
                    break;
                
                case 3:
                    cart.print_invoice();
                    break;

                case 4:
                    cart.check_out(revenue);
                    break;

                default:
                    break;
            }
        }while(c != 4);
    }
    void check_out_customer() {
        customer.pop();
        cout << "Thank you customer: "<< customer_id;
        customer_id--;
    }
    void report() {
        cout << "Total Products solded: " << revenue.get_tot_prod() << endl;
        cout << "Total Revenue per product" << endl;
        map<string, double> rev = revenue.get_rev_prod();
        map<string, double>::iterator itr;
        for(itr = rev.begin(); itr != rev.end(); ++itr) {
            cout << itr->first << "\t\t" << itr->second << endl;
        }
        cout << "Total Revenue for the day: " << revenue.get_tot_rev() << endl;
    }
    ~Deli() {
    }
};
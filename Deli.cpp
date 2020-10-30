#include<iostream>
#include<string>
#include<map>
#include<iterator>
#include<queue>
#include"Cart.cpp"
#include"Revenue.cpp"

using namespace std;
class Deli {

private:
    queue<int> customer;
    int customer_id;
    Revenue revenue;

public:
    Deli() {
        customer_id = 0;
        revenue = Revenue();
    }
    void arrival() {
        if(customer.size() < 10) {
            customer_id = (++customer_id)%11;
            customer.push(customer_id);
            return;
        }
        cout << "Queue Full!" << endl;
    }
    void select_customer() {
        int c;
        if(customer.empty()) {
            cout << "Queue Empty!" << endl;
            return;
        }
        cout << "Serving customer: " << customer.front() << endl;
        Cart cart;
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
    }
    void check_out_customer() {
        customer.pop();
        customer_id--;
        cout<<"Thank you customer no: "<< customer_id+1;
    }
    void report() {
        cout << "Total Products solded: " << revenue.get_tot_prod() << endl;
        cout << "Total Revenue per product" << endl;
        map<string, double>::iterator itr;
        for(itr = revenue.get_rev_prod().begin(); itr != revenue.get_rev_prod().end(); ++itr) {
            cout << itr->first << "\t\t" << itr->second << endl;
        }
        cout << "Total Revenue for the day: " << revenue.get_tot_rev() << endl;
    }
    ~Deli() {
        cout << "Ending Day!!!";
    }
};
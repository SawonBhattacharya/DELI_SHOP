#ifndef REVENUE_H
#define REVENUE_H

#include<string>
#include<map>
#include<iterator>

class Revenue {
    
    private:
        int total_product;
        double total_revenue;
        map<string, double> revenue_per_product;

    public:
        Revenue() {
            total_product = 0;
            total_revenue = 0.0;
            revenue_per_product.clear();
        }
        void set_tot_prod(int num) {
            total_product += num;
        }
        int get_tot_prod() {
            return total_product;
        }
        void set_tot_rev(double num) {
            total_revenue += num;
        }
        double get_tot_rev() {
            return total_revenue;
        }
        void set_rev_prod(string prod, double price) {
            revenue_per_product.insert(pair<string, double>(prod, price));
        }
        map<string, double> get_rev_prod() {
            return revenue_per_product;
        }
};

#endif
#include <bits/stdc++.h>
#include<iostream>
#include <queue>
#include<iterator>
#include<map>
#include<string>
#include"Scale.cpp"
#include"Price_list.cpp"
#include"Cart.cpp"

using namespace std;
class deli{
private:
    Cart cart;
    static queue <int> customer;
    static int customer_count,customer_id;
public:
    deli(){
        customer_id=(++customer_count)%11;
        }

    int get_customer_id(){
        return customer_id;
    }
    void static arrival(int id){
        if(customer.size()<10){
            customer.push(id);
        }
        else{
            cout<<"Queue is Full"<<endl;
        }
    }
    void check_out_customer(){
        int check_out_id=customer.front();
        cout<<"Thank you customer no: "<<check_out_id;
        customer_count--;
        customer.pop();

    }
   ~deli(){
       cout<<"Start of a New Day!!!";
   }
};
int deli::customer_count,deli::customer_id;
 queue <int> deli:: customer;
int main(){
    deli cust1;
    int c_id=cust1.get_customer_id();
    deli::arrival(c_id);

    deli cust2;
    c_id=cust2.get_customer_id();
    deli::arrival(c_id);

    deli cust3;
    c_id=cust3.get_customer_id();
    deli::arrival(c_id);

    deli cust4;
    c_id=cust4.get_customer_id();
    deli::arrival(c_id);

    deli cust5;
    c_id=cust5.get_customer_id();
    deli::arrival(c_id);

    deli cust6;
    c_id=cust6.get_customer_id();
    deli::arrival(c_id);

    deli cust7;
    c_id=cust7.get_customer_id();
    deli::arrival(c_id);

    deli cust8;
    c_id=cust8.get_customer_id();
    deli::arrival(c_id);

    deli cust9;
    c_id=cust9.get_customer_id();
    deli::arrival(c_id);

    deli cust10;
    c_id=cust10.get_customer_id();
    deli::arrival(c_id);

    deli cust11;
    c_id=cust11.get_customer_id();
    deli::arrival(c_id);





}

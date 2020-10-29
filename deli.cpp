#include<bits/stdc++.h>
#include<iostream>
#include<queue>
#include<iterator>
#include<map>
#include<string>
//#include"Scale.cpp"
//#include"Price_list.cpp"
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
	
    deli cust[10];
    int c_id;
    for(int i = 0; i < 10; i++) {
    	c_id = cust[i].get_customer_id();
    	deli::arrival(c_id);
	}
}

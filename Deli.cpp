#include<bits/stdc++.h>
#include<iostream>
#include<queue>
#include<iterator>
#include<map>
#include<string>
//#include"Scale.cpp"
//#include"Price_list.cpp"
//#include"Cart.cpp"

using namespace std;
class deli{
private:
    //Cart cart;

    int customer_count=0,customer_id=0;
public:

    int arrival(){
        customer_id=(++customer_count)%11;
        return customer_id;
    }
    void check_out_customer(){
       // int check_out_id=customer.front();
        //cout<<"Thank you customer no: "<<check_out_id;
       // customer_count--;
        //customer.pop();

    }
   ~deli(){
       cout<<"Start of a New Day!!!";
   }
};


int main(){

    deli cust;
    queue <int> cust_det;
    while(cust_det.size()<=9){
    	cust_det.push(cust.arrival());

    }
    while(cust_det.size()>0){
        cout<<"Element:"<<cust_det.front()<<endl;
        cust_det.pop();
    }

}

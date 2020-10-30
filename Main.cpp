#include<iostream>
#include"Deli.cpp"

using namespace std;

int main() {
    int choice;
    Deli deli;
    do {
        cout << "DELI SHOP\n1. New Day\n2. New Customer\n3. Serve Customer\n4. Check Out customer\n5. Report\n6. End Day\n0. EXIT PROGRAM\n\nEnter Choice:" << endl;
        cin >> choice;
        switch (choice)
        {
            case 1:
                deli = Deli();
                break;

            case 2:
                deli.arrival();
                break;
            
            case 3:
                deli.select_customer();
                break;
            
            case 4:
                deli.check_out_customer();
                break;
            
            case 5:
                deli.report();
                break;
            
            case 6:
                deli.~Deli();
                break;

            default:
                break;
        }
    }while(choice);
    return 0;
}
#include<iostream>
#include"Deli.cpp"

using namespace std;

int main() {
    int choice;
    Deli deli;
    do {
    	cout << "-------------------------" << endl;
        cout << "|\tDELI SHOP\t|\n|\t1. New Day\t|\n|\t2. New Customer\t|\n|\t3. Serve Customer|\n|\t4. Check Out customer|\n|\t5. Report\t|\n|\t6. End Day\t|\n|\t0. EXIT PROGRAM\t|" << endl;
        cout << "-------------------------" << endl;
        cout << "Enter choice: ";
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
                cout << "Ending Day!!!" << endl;
                deli.~Deli();
                break;

            default:
                break;
        }
    }while(choice);
    return 0;
}

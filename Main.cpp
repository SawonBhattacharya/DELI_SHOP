#include<iostream>
#include"Deli.cpp"

using namespace std;

int main() {
    int choice;
    Deli *deli = new Deli();
    do {
    	cout << "---------------------------------" << endl;
        cout << "|\tDELI SHOP\t\t|\n|\t1. New Day\t\t|\n|\t2. New Customer\t\t|\n|\t3. Serve Customer\t|\n|\t4. Check Out customer\t|\n|\t5. Report\t\t|\n|\t6. End Day\t\t|\n|\t0. EXIT PROGRAM\t\t|" << endl;
        cout << "---------------------------------" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << "Starting new day!!!\n" << endl;
                deli = new Deli();
                break;

            case 2:
                deli->arrival();
                break;
            
            case 3:
                deli->select_customer();
                break;
            
            case 4:
                deli->check_out_customer();
                break;
            
            case 5:
                deli->report();
                break;
            
            case 6:
                cout << "Ending Day!!!" << endl;
                deli = new  Deli();

            default:
                break;
        }
    }while(choice);
    return 0;
}

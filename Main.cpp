/********************************************************************************
* Program Name: Intermediate Programming 601.220 - Project 4                    *
* Problem statement: http://www.dsn.jhu.edu/courses/cs220/Project4.txt          *
* Source Code: https://github.com/SawonBhattacharya/DELI_SHOP.git               *
* Authors: Souvik Ghosh, Sawon Bhattacharya & Rajarsi Saha                      *
* Date of creation: 29th October, 2020                                          *
* Date of last modification: 31st October, 2020                                 *
*                                                                               *
********************************************************************************/

#include<iostream>
#include<Deli.hpp>

using namespace std;

int main() {
    int choice;
    Deli *deli = new Deli();
    do {
    	cout << "---------------------------------" << endl;
        cout << "|\tDELI SHOP\t\t|\n|\t1. New Day\t\t|\n|\t2. New Customer\t\t|\n|\t3. Serve Customer\t|\n|\t4. Report\t|\n|\t5. Update Price List\t\t|\n|\t6. End Day\t\t|\n|\t0. EXIT PROGRAM\t\t|" << endl;
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
                if(deli != NULL)
                    deli->arrival();
                else
                    cout << "\nPlease choose NEW DAY" << endl;
                break;
            
            case 3:
                if(deli != NULL)
                    deli->select_customer();
                else
                    cout << "\nPlease choose NEW DAY" << endl;
                break;
            
            /*case 4:
                if(deli != NULL)
                    deli->check_out_customer();
                else
                    cout << "\nPlease choose NEW DAY" << endl;
                break;*/

            case 4:
                if(deli != NULL)
                    deli->update_price();
                else
                    cout << "\nPlease choose NEW DAY" << endl;
                break;
            
            case 5:
                if(deli != NULL)
                    deli->report();
                else
                    cout << "\nPlease choose NEW DAY" << endl;
                break;
            
            case 6:
                cout << "Ending Day!!!" << endl;
                deli = NULL;

            default:
                break;
        }
    }while(choice);
    return 0;
}

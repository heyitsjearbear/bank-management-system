#include <iostream>
#include <iomanip>
#include "CustomerType.h"
#include "TransactionType.h"

using namespace std;

//GLOBAL FUNCTIONS

double askDeposit(){
    double amt;
    cout << "How much would you like to deposit: ";
    cin >> amt;
    return amt;
}

double askWithDrawal(){
    double amt;
    cout << "How much would you like to withdraw: ";
    cin >> amt;
    return amt;
}

int userChoice(){
    int selection;
    //cout << setfill('#') << setw(10) << endl;
    cout << "Hello, pick the corresponding the number what you want to do\n";
    cout << "1.) Withdraw\n2.) Deposit\n3.) Print Account Balance\n4.) Exit Application\n";
    cout << "What would you like to do: ";
    cin >> selection;
    return selection;


}

int main(){
    //create transaction object
    TransactionType transaction;
    string first, last;

    //declare and initialize variable that stores user's selection
    int Userselection = 0;

    //declare and initialize userDepoChoice/userWithdrawChoice
    string userDepoChoice = " ";
    string userWithdrawChoice = " ";

    //prompt user to input first and last name
    cout << "Hello, what is your first name? ";
    cin >> first;
    cout << "\nHello " << first << ", what is your last name? ";
    cin >> last;
    CustomerType customer (transaction, first, last);

    //test to see user's name entered correctly
    cout << "\nPleasure to meet you ";
    customer.printName();
    cout << endl;
    
    do{
        Userselection = userChoice();
        switch (Userselection){
            case 1:
                cout << endl;
                transaction.setWithDrawal(askWithDrawal());
                break;
            case 2:
                cout << endl;
                transaction.setDeposit(askDeposit());
                break;
            case 3:
                cout << endl;
                transaction.printSummary();
            case 4: 
                break;
            default:
                cout << "Invalid selection, please try again.\n";
                break;

        }


    } while(Userselection!=4);
    return 0;
}
#include <iostream>
#include <iomanip>
#include "CustomerType.h"
#include "TransactionType.h"

using namespace std;

int askDeposit(){
    double amt;
    cout << "How much would you like to deposit: ";
    cin >> amt;
    return amt;
}

int main(){
    //create transaction object
    TransactionType transaction;
    string first, last;

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
    
    // test to see if deposit is updated
    // Implement Function that will ask the user if they'd like to deposit
    // transaction.setDeposit(askDeposit());
    // transaction.setDeposit(askDeposit());

    // test to see how much you deposited for session
    // cout << "this is how much you deposited: " << transaction.getDeposit() << endl;

    cout << endl;
    return 0;
}
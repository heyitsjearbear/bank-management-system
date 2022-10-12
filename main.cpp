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
    transaction.setDeposit(askDeposit());
    transaction.setDeposit(askDeposit());

    // test to see if withdrawal is updated
    transaction.setWithDrawal(askWithDrawal());
    transaction.setWithDrawal(askWithDrawal());

    // test to see how much you deposited and withdrawed
    cout << "this is how much you deposited: " << transaction.getDeposit() << endl;
    cout << "this is how much you withdrawed: " << transaction.getWithdrawal() << endl;

    cout << endl;
    return 0;
}
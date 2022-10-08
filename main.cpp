#include <iostream>
#include <iomanip>
#include "CustomerType.h"
#include "TransactionType.h"

using namespace std;

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




    return 0;
}
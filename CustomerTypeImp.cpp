#include <iostream>
#include "CustomerType.h"
using namespace std;

//prints customer's first and last name
void CustomerType::printName() const{
    cout << getFirstsName() << " " << getLastName() << endl;
}

string CustomerType::getFirstsName() const{
    return firstName;
}

string CustomerType::getLastName() const{
    return lastName;
}

//parameterized constructor
CustomerType::CustomerType(TransactionType tobj, string first, string last){
    firstName = first;
    lastName = last;
    transaction = tobj;
}
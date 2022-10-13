#include <iostream>
#include "TransactionType.h"
using namespace std;

//initalize values in default constructor
TransactionType::TransactionType(){
    ID = "blank id";
    deposit = 100;
    withdrawal = 0;
    endingTotal = 0;
}

//setter function to set transaction details
void TransactionType::setTransaction(string id, double depo, 
                                double withdraw){
    
    ID = id;
    deposit = depo;
    withdrawal = withdraw;
    endingTotal = deposit - withdrawal;
}

//setter deposit function
void TransactionType::setDeposit(double depo){
            deposit+=depo;
}

//setter withdrawal function
void TransactionType::setWithDrawal(double withdraw){
            withdrawal+=withdraw;
}

// retrieve deposit number
double TransactionType::getDeposit() const{
    return deposit;
}

// retrieve withdrawal number
double TransactionType::getWithdrawal() const{
    return withdrawal;
}
                                    

//parameterized constructor
TransactionType::TransactionType(string id, double depo, 
                                double withdraw):
                                ID(id), deposit(depo), 
                                withdrawal(withdraw){
    endingTotal = deposit - withdrawal;
}

// print summary of transaction details
void TransactionType::printSummary() const{
    cout << "Account Balance after this session: " << endingTotal << endl;
}

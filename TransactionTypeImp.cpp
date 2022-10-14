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

//setter for setting end balance
// void TransactionType::setEndTotal(double end){
//     endingTotal = deposit - withdrawal;
// }

// retrieve deposit number
double TransactionType::getDeposit() const{
    return deposit;
}

// retrieve withdrawal number
double TransactionType::getWithdrawal() const{
    return withdrawal;
}

//retrieve ending total
// double TransactionType::getEndBalance() const{
//     return endingTotal;
// }
                                    

//parameterized constructor
TransactionType::TransactionType(string id, double depo, 
                                double withdraw):
                                ID(id), deposit(depo), 
                                withdrawal(withdraw){
    endingTotal = deposit - withdrawal;
}

// print summary of transaction details
void TransactionType::printSummary() const{
    cout << "Account Balance after this session: " << deposit-withdrawal << endl;
}

#include <iostream>
#include "TransactionType.h"
using namespace std;

//initalize values in default constructor
TransactionType::TransactionType(){
    ID = "blank id";
    deposit = 0;
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

// retrieve deposit number
double TransactionType::getDeposit() const{
    return deposit;
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
    cout << "Transaction ID: " << ID << endl;
    //cout << "Deposit Amount: " << deposit << endl;
    //cout << "Withdrawal Amount: " << withdrawal << endl;
    cout << "Account Balance after this session: " << endingTotal << endl;
}

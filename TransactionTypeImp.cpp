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
                                double withdraw, double endTot){
    
    ID = id;
    deposit = depo;
    withdrawal = withdraw;
    endingTotal = endTot;
}
                                    

//parameterized constructor
TransactionType::TransactionType(string id, double deposit, 
                                double withdrawal, double endingTotal):
                                ID(id), deposit(deposit), 
                                withdrawal(withdrawal), 
                                endingTotal(endingTotal){}

// print summary of transaction details
void TransactionType::printSummary() const{
    cout << "Transaction ID: " << ID << endl;
    cout << "Deposit Amount: " << deposit << endl;
    cout << "Withdrawal Amount: " << withdrawal << endl;
    cout << "Account Balance: " << endingTotal << endl;
}

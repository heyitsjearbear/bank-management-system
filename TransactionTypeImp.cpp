#include <iostream>
#include "TransactionType.h"
using namespace std;

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

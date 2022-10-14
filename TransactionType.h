#ifndef TransactionType_H
#define TransactionType_H

#include <string>
using namespace std;
class TransactionType{
    private:
        string ID;
        double deposit;
        double withdrawal;
        double endingTotal;
    public:
        //default constructor
        TransactionType();
        //parameterized constructor to set members
        TransactionType(double depo);
        //print summary of transaction details
        void printSummary() const;

        //setter function to set member variables
        void setTransaction(string id, double depo, double withdraw);
        //set deposit
        void setDeposit(double depo);

        //setter for setting end balance
        void setEndTotal(double end);

        // set withdrawal
        void setWithDrawal(double withdraw);
        //getter functions for members

        //retrieve deposit
        double getDeposit() const;

        // retrieve withdraw
        double getWithdrawal() const;

        //retrieve ending total
        double getEndBalance() const;
        
};


#endif
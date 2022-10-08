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
        TransactionType(string id, double deposit, double withdrawal, double endingTotal);
        //print summary of transaction details
        void printSummary() const;

        //setter function to set member variables
        void setTransaction(string id, double deposit, double withdrawal, double endingTotal);
        //getter functions for members
        
};


#endif
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
        //parameterized constructor to set members
        TransactionType(string id, double deposit, double withdrawal, double endingTotal);
        //print summary of transaction details
        void printSummary() const;
        //getter functions for members
        
};


#endif
#ifndef CustomerType_H
#define CustomerType_H

#include <string>
#include "TransactionType.h"
using namespace std;

class CustomerType{
    private:
        string firstName;
        string lastName;
        TransactionType transaction;
    public:
        void printName() const;
        void setName(string first, string last);
        string getFirstsName() const;
        string getLastName() const;
        CustomerType(TransactionType tobj, string first = "first", string last = "last");
    


};

#endif
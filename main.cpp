#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include "CustomerType.h"
#include "TransactionType.h"
#include "GLOBALFUNCTIONS.h"

using namespace std;


int main(){
    string returningUser = "";
    do{
        cout << "Are you a returning user? Type Y or N: ";
        cin >> returningUser;
        if (returningUser == "Y" || returningUser == "y"){
            prevUser();
        } 
        else if(returningUser == "N" || returningUser == "n"){
            newUser();
        } else{
            returningUser = "Invalid";
            cout << "\nInvalid input please select yes or no.\n";
        }

    }while(returningUser == "Invalid");
    cout << endl;
    return 0;
}
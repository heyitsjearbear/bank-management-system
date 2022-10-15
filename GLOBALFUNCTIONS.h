#ifndef GLOBALFUNCTIONS_H
#define GLOBALFUNCTIONS_H
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include "CustomerType.h"
#include "TransactionType.h"

//global functions
double askDeposit(){
    double amt;
    cout << "How much would you like to deposit: ";
    cin >> amt;
    return amt;
}

double askWithDrawal(){
    double amt;
    cout << "How much would you like to withdraw: ";
    cin >> amt;
    return amt;
}

int userChoice(){
    int selection;
    cout <<  setfill('#') << setw(60) << '#';
    cout << "\nHello, pick the corresponding the number what you want to do\n";
    cout << "1.) Withdraw\n2.) Deposit\n3.) Print Account Balance\n4.) Exit Application\n";
    cout <<  setfill('#') << setw(60) << '#';
    cout << "\nWhat would you like to do: ";
    cin >> selection;
    return selection;


}

void prevUser(){
    //create variables to store previous user's name
    string first, last;

    //retrive user's name
    //create string stream object to store line of file
    ifstream iFile;
    iFile.open("results.txt");
    string line;
    getline(iFile,line);
    stringstream ss(line);
    getline(ss,first, ' ');
    getline(ss, last,' ');


    //declare and initialize variable that stores user's selection
    int Userselection = 0;

    //declare and initialize userDepoChoice/userWithdrawChoice
    string userDepoChoice = " ";
    string userWithdrawChoice = " ";

    string amt;
    getline(iFile,amt);
    TransactionType transaction(stod(amt));

    CustomerType customer (transaction, first, last);

    //WELCOME BACK OUTPUT
    cout << "\nWELCOME BACK ";
    customer.printName();
    cout << endl <<  "********You have $" << amt << " in your account********\n\n";
    iFile.close();
    do{
        Userselection = userChoice();
        switch (Userselection){
            case 1:
                cout << endl;
                transaction.setWithDrawal(askWithDrawal());
                break;
            case 2:
                cout << endl;
                transaction.setDeposit(askDeposit());
                break;
            case 3:
                cout << endl;
                //transaction.printSummary();
                cout << "Current account Balance: $" << transaction.getDeposit()-transaction.getWithdrawal() << endl;
                break;
            case 4:
                cout << endl;
                cout << "Thank you, have a good day!";
                break;
            default:
                cout << "Invalid selection, please try again.\n";
                break;

        }


    } while(Userselection!=4);

    cout << "\nwriting results to results.txt\n";
    ofstream oFile;
    oFile.open("results.txt");
    oFile << first << " " << last << endl;
    oFile << transaction.getDeposit()-transaction.getWithdrawal();
    oFile.close();
    
}

void newUser(){
    //create transaction object
    
    string first, last;

    //declare and initialize variable that stores user's selection
    int Userselection = 0;

    //declare and initialize userDepoChoice/userWithdrawChoice
    string userDepoChoice = " ";
    string userWithdrawChoice = " ";

    //give starting bank account of 100;
    TransactionType transaction(100);

    //prompt user to input first and last name
    cout << "Hello, what is your first name? ";
    cin >> first;
    cout << "\nHello " << first << ", what is your last name? ";
    cin >> last;
    CustomerType customer (transaction, first, last);

    //test to see user's name entered correctly
    cout << "\nPleasure to meet you ";
    customer.printName();
    cout << endl <<  "********You have a starting account balance of $" << transaction.getDeposit() << "********\n\n";
    do{
        Userselection = userChoice();
        switch (Userselection){
            case 1:
                cout << endl;
                transaction.setWithDrawal(askWithDrawal());
                break;
            case 2:
                cout << endl;
                transaction.setDeposit(askDeposit());
                break;
            case 3:
                cout << endl;
                //transaction.printSummary();
                cout << "Current account Balance: $" << transaction.getDeposit()-transaction.getWithdrawal() << endl;
                break;
            case 4:
                cout << endl;
                cout << "Thank you, have a good day!";
                break;
            default:
                cout << "Invalid selection, please try again.\n";
                break;

        }


    } while(Userselection!=4);

    cout << "\nwriting results to results.txt\n";
    ofstream oFile;
    oFile.open("results.txt");
    oFile << first << " " << last << endl;
    oFile << transaction.getDeposit()-transaction.getWithdrawal();
    oFile.close();
}

#endif
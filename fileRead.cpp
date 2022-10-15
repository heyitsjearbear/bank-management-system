#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
    string first, last;
    ifstream iFile;
    iFile.open("results.txt");
    string row;
    getline(iFile,row);
    stringstream ss(row);
    getline(ss,first, ' ');
    getline(ss, last,' ');
    iFile.close();

    cout << first << " " << last << endl;

    return 0;
}

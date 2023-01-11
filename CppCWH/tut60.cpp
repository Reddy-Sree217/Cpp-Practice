#include<iostream>
#include<fstream>
using namespace std;



// ofstream --> to write
// ifstream --> to read

int main(){
    string name = "Thank you Harry bhai";
    ofstream out("sample60.txt");
    out<<name;

    ifstream in("sample60b.txt");
    // in>>name; //Prints only hello becoz space terminates the string
    getline(in,name);
    cout<<name;
    return 0;
}
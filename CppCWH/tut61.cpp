#include<iostream>
#include<fstream>
using namespace std;


int main(){
    string name;

    cout<<"Enter your name";
    // cin>>name;
    getline(cin,name);
    ofstream fout("sample61.txt");
    fout<<name;
    fout.close();

    ifstream fin("sample61.txt");
    string name1;
    // fin>>name1;
    getline(fin,name1);
    cout<<name1;
    fin.close();
    return 0;
}
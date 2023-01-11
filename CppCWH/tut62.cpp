#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample62.txt");
    out << "Reading and writing to file"<<endl;
    out << "Reading and writing to file"<<endl;
    out << "Reading and writing to file\n";
    out << "Reading and writing to file\n";
    out << "Reading and writing to file\n";
    out << "Reading and writing to file\n";
    out << "Reading and writing to file\n";
    out << "Reading and writing to file\n";
    out << "Reading and writing to file\n";
    out << "Reading and writing to file\n";
    out << "Reading and writing to file\n";
    out << "Reading and writing to file\n";
    out << "Reading and writing to file\n";
    out << "Reading and writing to file\n";
    out << "Reading and writing to file\n";
    out << "Reading and writing to file\n";
    out << "Reading and writing to file\n";
    out << "Reading and writing to file";
    out << "Reading and writing to file";
    out.close();

    string st;
    ifstream in;
    in.open("sample62.txt");
    while (in.eof() == 0)
    {
        // in >> st;
        getline(in,st);
        cout << st<<endl;
    }
    return 0;
}
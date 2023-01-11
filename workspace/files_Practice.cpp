#include<iostream>
#include<fstream>
using namespace std;

string text="#include<iostream>#include<fstream>using namespace std;int main(){return 0;}#include<iostream>#include<fstream>using namespace std;int main(){return 0;}#include<iostream>#include<fstream>using namespace std;int main(){return 0;}";
string out;
int main(){
    ofstream createFile;
    createFile.open("test.txt");
    for(int i=0;i<text.length();i++){
        if(i%5==0){
            createFile<<text[i]<<endl;
        }
        else{
            createFile<<text[i];
        }
    }
    createFile.close();
    ifstream readFile;
    readFile.open("test.txt");
    while(getline (readFile,out)){
        cout<<out<<endl;
    }
    readFile.close();
    return 0;
}
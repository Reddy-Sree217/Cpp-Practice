#include<iostream>
#include<string>
using namespace std;

class Strings{
    string s1;
    string s2;
    string s3;
    int size1=0;
    int size2=0;
    int size3=0;
    public:
    void setString1(string);
    void setString2(string);
    void setString3(string);
    void calcSize1(string);
    void calcSize2(string);
    void calcSize3(string);
    void LongestCommonPrefix(void);
};


void Strings::setString1(string s1){
    this->s1=s1;
    calcSize1(s1);
}

void Strings::setString2(string s2){
    this->s2=s2;
    calcSize2(s2);
}
void Strings::setString3(string s3){
    this->s3=s3;
    calcSize3(s3);
}

void Strings::calcSize1(string s){
    size1 = s.length();
}

void Strings::calcSize2(string s){
    size2 = s.length();
}

void Strings::calcSize3(string s){
    size3 = s.length();
}

void Strings::LongestCommonPrefix(void){
    cout<<size1<<"\t"<<size2<<"\t"<<size3<<endl;
    cout<<"\"";
    for(int i=0;i<min(min(size1,size2),size3);i++){
        if((s1[i]==s2[i])&&(s1[i]==s3[i])){
            cout<<s1[i];
        }
    }
    cout<<"\"";    
}

int main(){
    Strings s;
    string s1;
    string s2;
    string s3;
    // string st = "\"";
    // cout<<st<<endl;
    cout<<"Enter string1"<<endl;
    cin>>s1;
    cout<<"Enter string2"<<endl;
    cin>>s2;
    cout<<"Enter string3"<<endl;
    cin>>s3;
    s.setString1(s1);
    s.setString2(s2);
    s.setString3(s3);
    s.LongestCommonPrefix();
    return 0;
}
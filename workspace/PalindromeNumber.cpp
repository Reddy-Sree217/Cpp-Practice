#include<iostream>
#include<string>
using namespace std;

class Palindrome{
    int num;
    int size=0;
    bool value = true;
    string st;
    public:
    void setNum(int);
    void palindromeChecker(void);
    void setSize(void);
    void print(void);
};



void Palindrome::setNum(int num){
    this->num = num;
}

void Palindrome::setSize(void){
    st = to_string(num);
    size = st.size();
    // cout<<size<<endl;
}

void Palindrome::palindromeChecker(void){
    for(int i=0;i<size;i++){
        if(st[i] != st[size-i-1]){
            value = false;
            break;
        }
        // cout<<st[size-i-1]<<endl;
    }
}

void Palindrome::print(void){
    if(value){
        cout<<true<<endl;
    }
    else
        cout<<false<<endl;
}

int main(){
    Palindrome p;
    int number;
    cout<<"Enter the number: "<<endl;
    cin>>number;
    p.setNum(number);
    p.setSize();
    p.palindromeChecker();
    p.print();
    return 0;
}
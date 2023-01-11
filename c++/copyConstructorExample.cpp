#include<iostream>
#include<cstring>
using namespace std;

class String{
    private:
    int size;
    char *s;
    public:
    String(){   cout<<"Empty Constructor"<<endl;    }
    String(const char *str){
        size = strlen(str);
        s = new char[size+1];
        strcpy(s, str);
    }
/*    
    String(const String &str1){
        size = str1.size;
        s = new char[size+1];
        s = str1.s;
    }
*/    
    void change(const char *str){
        size = strlen(str);
        s = new char[size+1];
        strcpy(s,str);
    }
    void print(){   cout<<s<<endl;  }
    ~String(){  "Deleted";   }
};




int main(){
    String str1("GeeksQuiz");
    String str2 = str1;
    str1.print();
    str2.print();
    cout<<endl;
    str2.change("GeeksforGeeks");
    cout<<endl;
    str1.print();
    str2.print();
    return 0;
}
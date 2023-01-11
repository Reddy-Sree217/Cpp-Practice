#include<iostream>
#include<string>
#include<map>
using namespace std;

void display(map<string,int> &map1){
    map<string,int>::iterator itr;
    for(itr = map1.begin();itr!=map1.end();itr++){
        cout<<(*itr).first<<"\t"<<(*itr).second<<endl;
        // cout<<(*itr).first<<endl;      //prints the key
        // cout<<(*itr).second<<endl;      //prints the value
    }
}

int main(){
    map<string,int> map1;
    map1["Apple"] = 98;
    map1["OnePlus"] = 92;
    map1["Samsung"] = 88;
    display(map1);
    cout<<endl;
    cout<<endl;
    map1.insert({"Vivo",50});
    display(map1);
       
    return 0;
}
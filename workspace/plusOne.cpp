#include<iostream>
#include<vector>
#include<cmath>
#include<sstream>
using namespace std;

void plusOne(vector<int>& v){
    float value=0;
    for(int i=0;i<v.size();i++){
        value +=v[i]*pow(10,v.size()-(i+1));
    }
        cout<<(int)value<<endl;
        value++;
        int val = (int)value;
        string st = to_string(val);
        int length = st.size();
        cout<<length<<endl;
        for(int i=0;i<length;i++){
            int num;
            num = val%10;
            // cout<<num<<endl;
            val = val/10;
        }
}


int main(){
    vector<int> vec;
    int size;
    int element=0;
    cout<<"Enter the size: "<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter the element"<<endl;
        cin>>element;
        vec.push_back(element);
    }
    plusOne(vec);
}
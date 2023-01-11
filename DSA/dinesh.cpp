// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> values(6);
    for(int i=0;i<6;i++){
        cin>>values[i];
    }
    double ans = 0;
    ans+=values[0]*25+values[1]*50+values[2]*100+values[3]*200+values[4]*500+values[5]*1000;
    cout<<ans/100<<endl;
    return 0;
}
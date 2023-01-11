#include<iostream>
#include<vector>
using namespace std;

void display(vector<vector<int>> &v){
    for(int i=0;i<v.size();i++){
        for(auto it = v[i].begin();it!=v[i].end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
}

int main(){

    vector<vector<int>> vect = {{1,2,3},{4,5,6},{7,8,9}};
    display(vect);
    // vect.pop_back();  //Removes the last entire 1-Dvector
    vect[2].pop_back();  //pop ups the last element of vect[2]
    display(vect);
    return 0;
}
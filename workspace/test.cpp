#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

template<class T>
void display(vector<T> &vec){
    for(auto it=vec.begin();it!=vec.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}


int main(){


    // int k=5;
    // if(k!=5)
    // cout<<"Hi"<<endl;
    // cout<<"Hiiiiii"<<endl;

    vector<int> vec{11,2,1,14,5};
    // cout<<"Before Resizing: "<<vec.size()<<endl;
    display(vec);
    // vec.resize(3);
    // cout<<"After Resizing: "<<vec.size()<<endl;
    // display(vec);

    // vec.shrink_to_fit();
    // vec.resize(50);
    // cout<<"After Resizing: "<<vec.size()<<endl;
    // display(vec);
    cout<<endl;
    sort(vec.begin(),vec.end());
    display(vec);


    return 0;
}
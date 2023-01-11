#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // int arr[][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}};
    int a = 5;
    int arr[a][a];
    vector<int> v(a);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl
         << endl;
    vector<vector<int>> vect(5,vector<int>(7));
    cout<<vect[0].size()<<endl;
    for(int i=0;i<vect.size();i++){
        for(int j=0;j<vect[0].size();j++){
            cout<<vect[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
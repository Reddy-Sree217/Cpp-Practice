#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v)
{
    for (auto it : v)
        cout << it << " ";
    cout << endl;
}

void reverse(vector<int> &v, int left, int right)
{
    while (left <= right)
        swap(v[left++], v[right--]);
}

int main()
{
    int size = 0;
    cin >> size;
    int d = 0;
    cin >> d;
    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        int tmp = 0;
        cin >> tmp;
        v.push_back(tmp);
    }
    print(v);
    reverse(v, 0, d - 1);
    reverse(v, d, size - 1);
    reverse(v, 0, size - 1);
    print(v);
    return 0;
}
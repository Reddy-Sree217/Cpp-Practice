#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char, int> mp1;
    mp1['a']++;
    mp1['b']++;
    map<char, int> mp2;
    mp2['b']++;
    mp2['a']++;
    string ans = "";
    cout << ans;
    cout << (mp1 == mp2);
    return 0;
}
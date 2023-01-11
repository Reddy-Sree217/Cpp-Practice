#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int left = 0;
    int right = s.size() - 1;
    while (left <= right)
    {
        if (s[left++] != s[right--])
            return false;
    }
    return true;
}

int main()
{


    string s;
    string a = "";
    a = s[0] + s[1];
    string b = "";
    b = s[3];
    string tmp = "";
    for (int i = 4; i < s.size(); i++)
    {
        tmp += s[i];
    }
    int num = stoi(tmp);



//     string num = "606";
//     int n = stoi(num);
//     n += 1;
//     while (n <= 10001)
//     {
//         if (isPalindrome(to_string(n)))
//         {
//             cout << to_string(n) << endl;
//             break;
//         }
//         else
//             n += 1;
//     }
    return 0;
}

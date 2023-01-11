// #include <iostream>
// using namespace std;

// string func(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         int count = 0;
//         int temp = arr[i];
//         while (count <= 3)
//         {
//             temp = arr[temp - 1];
//             count++;
//         }
//         if (arr[i] == temp)
//             return "YES";
//     }
//     return "NO";
// }

// int main()
// {
//     int arr[6] = {2, 4, 5, 6, 3, 1};
//     cout << func(arr, 6) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int f2(char f, char s, char t)
// {

//     if (f == 'r' && s == 'e' && t == 'x')
//         return 1;
//     else if (f == '?' && s == 'e' && t == 'x')
//         return 1;
//     else if (f == 'r' && s == '?' && t == 'x')
//         return 1;
//     else if (f == 'r' && s == 'e' && t == '?')
//         return 1;
//     return 0;
// }

// int findNumber(string &st)
// {
//     if (st.size() < 3)
//         return 0;
//     int ans = 0;
//     for (int i = 0; i <= st.size() - 3; i++)
//     {
//         char f = st[i];
//         char s = st[i + 1];
//         char t = st[i + 2];
//         // cout << f << s << t;
//         ans += f2(f, s, t);
//     }
//     return ans;
// }

// int main()
// {
//     string st = "?exre?";
//     cout << findNumber(st);
// }

// #include <iostream>
// #include <set>
// #include <vector>
// using namespace std;

// int main(int argc, char const *argv[])
// {

//     set<vector<int>> s;
//     s.insert({1});
//     s.insert({2});
//     s.insert({3});
//     vector<vector<int>> v;
//     for (auto it : s)
//     {
//         v.push_back(it);
//     }
//     return 0;
// }

bool isPrime(int n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int func(int num)
{
    int ans = 0;
    while (num > 0)
    {
        if (isPrime(num % 10))
            ans++;
        num = num / 10;
    }
    return ans;
}

#include <iostream>
using namespace std;

int main()
{
    int num = 23579;
    cout << func(num) << endl;
    return 0;
}



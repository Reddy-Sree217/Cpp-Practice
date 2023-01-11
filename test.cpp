// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int size;
//     cin >> size;
//     vector<int> nums(size);
//     for (int i = 0; i < size; i++)
//     {
//         int tmp;
//         cin >> tmp;
//         nums[i] = tmp;
//     }
//     sort(nums.begin(), nums.end());
//     cout << nums[size - 1] * nums[size - 2] << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string tmp = "";
//     getline(cin,tmp);
//     char c;
//     cin >> c;
//     int ans = 0;
//     for (auto it : tmp)
//     {
//         if (it == c)
//             ans++;
//     }
//     cout << ans << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int size;
//     cin >> size;
//     vector<int> arr(size);
//     for (int i = 0; i < size; i++)
//     {
//         int tmp;
//         cin >> tmp;
//         arr[i] = tmp;
//     }
//     // int count = 1;
//     // for (int i = 1; i < size; i++)
//     // {
//     //     if (arr[i] == arr[i - 1])
//     //         count++;
//     //     else
//     //     {
//     //         cout << arr[i - 1] << "->" << count << endl;
//     //         count = 1;
//     //     }
//     // }
//     // cout << arr[size - 1] << "->" << count << endl;
//     map<int, int> mp;
//     for (auto it : arr)
//         mp[it]++;
//     for (auto it : mp)
//     {
//         cout << it.first << "->" << it.second << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int prev = 1;
//     int prevprev = 1;
//     int n = 15;
//     for (int i = 3; i <= n; i++)
//     {
//         int curr = prev + prevprev;
//         prevprev = prev;
//         prev = curr;
//     }
//     cout << prev << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string tmp = "";
    getline(cin, tmp);
    string ans = "";
    string t = "";
    for (auto it : tmp)
    {
        if (it == ' ')
        {
            ans += t[0];
            ans += '.';
            t = "";
        }
        else
            t += it;
    }
   ans += t;
    cout << ans << endl;
    // for (auto it : ans)
    //     cout << it;
    return 0;
}

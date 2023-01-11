// Brute Force

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> nums{4, 2, 2, 6, 4};
//     int targetXOR = 6;
//     int count = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         int tmp = nums[i];
//         if (targetXOR == tmp)
//             count++;
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             tmp ^= nums[j];
//             if (tmp == targetXOR)
//                 count++;
//         }
//     }
//     cout << count << endl;
//     return 0;
// }

// Optimized

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums{4, 2, 2, 6, 4};
    int targetXOR = 6;
    int count = 0;
    unordered_map<int, int> mp;
    mp[0] = 1;
    int tmp = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        tmp ^= nums[i];
        cout << "Xor Values " << tmp << "\t" << (tmp ^ targetXOR) << endl;

        if (mp.find(tmp ^ targetXOR) != mp.end())
        {
            count += mp[tmp ^ targetXOR];
            cout << "Count of " << (tmp ^ targetXOR) << "  " << mp[tmp ^ targetXOR] << "\t count is " << count << endl;
        }
        mp[tmp]++;
    }
    cout << count << endl;
    return 0;
}
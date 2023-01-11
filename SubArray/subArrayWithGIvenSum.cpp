
// BruteForce

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     vector<int> nums{10, 15, -5, 15, -10, 5};
//     int target = 5;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         int sum = nums[i];
//         if (sum == target)
//             cout << i << endl;
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             sum += nums[j];
//             if (sum == target)
//                 cout << i << " " << j << endl;
//         }
//     }

//     return 0;
// }

// Printing All subarrays with given target

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> nums{1, 15, -5, 15, -10, 45};
//     int target = 10;

//     unordered_map<int, int> mp;
//     mp[0] = -1;
//     int tmp = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         tmp += nums[i];
//         if (mp.find(tmp - target) != mp.end())
//             cout << mp[tmp - target] + 1 << " " << i << endl;
//         mp[tmp] = i;
//     }

//     return 0;
// }

// Largest Subarray with given target

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> nums{5, 15, -5, -15, 10, 5};
    int target = 10;
    int startIndex = -1;
    int endIndex = -1;
    int tmp = 0;
    int tmpSize = 0;
    unordered_map<int, int> mp;
    mp[0] = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        tmp += nums[i];
        if (mp.find(tmp - target) != mp.end())
        {
            if (tmpSize < (i - mp[tmp - target] + 1) + 1)
            {
                tmpSize = (i - mp[tmp - target] + 1) + 1;
                startIndex = mp[tmp - target] + 1;
                endIndex = i;
            }
        }
        else
            mp[tmp] = i;
    }

    cout << startIndex << " " << endIndex << " - size is " << endIndex - startIndex + 1 << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{1, 1, 0, 1, 0, 1, 1, 0, 0};

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
            arr[i] = -1;
    }

    int target = 0;
    int startIndex = -1;
    int endIndex = -1;
    int tmp = 0;
    int tmpSize = 0;
    unordered_map<int, int> mp;
    mp[0] = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        tmp += arr[i];
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
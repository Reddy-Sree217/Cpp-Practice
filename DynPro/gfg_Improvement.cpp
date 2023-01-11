#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> hval{6, 7, 1, 3, 8, 2, 4};
    int n = hval.size();
    // Including the first house
    // So Dropping the last house
    int prevprev1 = 0;
    int prev1 = hval[0];
    for (int i = 1; i < n - 1; i++)
    {
        int rob = hval[i];
        if (i > 1)
            rob += prevprev1;
        int dontrob = 0 + prev1;
        int curr = max(rob, dontrob);
        prevprev1 = prev1;
        prev1 = curr;
    }

    int maxValueCanRobLeavinglasttHouse = prev1;

    // Including the last house
    // So Dropping the first house
    int prevprev2 = 0;
    int prev2 = hval[1];
    for (int i = 2; i < n; i++)
    {
        int rob = hval[i];
        if (i > 2)
            rob += prevprev2;
        int dontrob = 0 + prev2;
        int curr = max(rob, dontrob);
        prevprev2 = prev2;
        prev2 = curr;
    }

    int maxValueCanRobLeavingFirstHouse = prev2;

    int maxValueCanRob = max(maxValueCanRobLeavingFirstHouse,
                             maxValueCanRobLeavinglasttHouse);
    cout << "Max Value can be stolen is: " << maxValueCanRob
         << endl;
    return 0;
}
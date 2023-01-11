#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr)
{
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
}

void nextGreaterElement(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int j = i + 1;
        int flag = 1;
        while (j < arr.size())
        {
            if (arr[j] > arr[i])
            {
                arr[i] = arr[j];
                flag = 0;
                break;
            }
            j++;
        }
        if (flag)
            arr[i] = -1;
    }
}

void nextGreaterElementUsingStack(vector<int> &arr)
{
    stack<int> s;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        int tmp = arr[i];
        while (!s.empty() && s.top() < arr[i])
            s.pop();
        if (s.empty())
            arr[i] = -1;
        else
            arr[i] = s.top();
        s.push(tmp);
    }
}

int main()
{
    vector<int> arr{4, 10, 5, 8, 20, 15, 3, 12};
    printArray(arr);
    // nextGreaterElement(arr);
    // printArray(arr);
    nextGreaterElementUsingStack(arr);
    printArray(arr);
    return 0;
}
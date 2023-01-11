#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr)
{
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
}

void prevGreaterElement(vector<int> &arr)
{
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        int flag = 1;
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > arr[i])
            {
                arr[i] = arr[j];
                flag = 0;
                break;
            }
            j--;
        }
        if (flag)
            arr[i] = -1;
    }
}

void prevGreaterElementUsingStack(vector<int> &arr)
{
    stack<int> s;
    for (int i = 0; i < arr.size(); i++)
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
    // prevGreaterElement(arr);
    // printArray(arr);
    prevGreaterElementUsingStack(arr);
    printArray(arr);
    return 0;
}
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void printArray(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void prevSmallerElementBruteForce(vector<int> &ip)
{
    for (int i = ip.size() - 1; i > 0; i--)
    {
        int flag = 1;
        for (int j = i - 1; j >= 0; j--)
        {
            if (ip[j] < ip[i])
            {
                ip[i] = ip[j];
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            ip[i] = -1;
        }
    }
    ip[0] = -1;
}

void prevSmallerElement(vector<int> &ip)
{
    stack<int> s;
    for (int i = 0; i < ip.size(); i++)
    {
        int temp = ip[i];
        while (!s.empty() && s.top() > temp)
        {
            s.pop();
        }
        if (s.empty())
        {
            ip[i] = -1;
        }
        else
        {
            ip[i] = s.top();
        }
        s.push(temp);
    }
}

void nextsmallerElementBruteForce(vector<int> &ip)
{
    for (int i = 0; i < ip.size() - 1; i++)
    {
        int flag = 1;
        for (int j = i + 1; j < ip.size(); j++)
        {
            if (ip[j] > ip[i])
            {
                ip[i] = ip[j];
                flag = 0;
                break;
            }
        }
        if (flag)
            ip[i] = -1;
    }
    ip[ip.size() - 1] = -1;
}

void nextsmallerElement(vector<int> &ip)
{
    stack<int> s;
    for (int i = ip.size() - 1; i >= 0; i--)
    {
        int temp = ip[i];
        while (!s.empty() && s.top() < temp)
        {
            s.pop();
        }
        if (s.empty())
            ip[i] = -1;
        else
            ip[i] = s.top();
        s.push(temp);
    }
}

void prevGreaterElementBruteForce(vector<int> &ip)
{
    for (int i = ip.size() - 1; i > 0; i--)
    {
        int flag = 1;
        for (int j = i - 1; j >= 0; j--)
        {
            if (ip[i] < ip[j])
            {
                ip[i] = ip[j];
                flag = 0;
                break;
            }
        }
        if (flag)
            ip[i] = -1;
    }
    ip[0] = -1;
}

void prevGreaterElement(vector<int> &ip)
{
    stack<int> s;
    for (int i = 0; i < ip.size(); i++)
    {
        int temp = ip[i];
        while (!s.empty() && s.top() < ip[i])
        {
            s.pop();
        }
        if (s.empty())
            ip[i] = -1;
        else
            ip[i] = s.top();
        s.push(temp);
    }
}

void nextGreaterElementBruteForce(vector<int> &ip)
{
    for (int i = 0; i < ip.size() - 1; i++)
    {
        int flag = 1;
        for (int j = i + 1; j < ip.size(); j++)
        {
            if (ip[i] < ip[j])
            {
                ip[i] = ip[j];
                flag = 0;
                break;
            }
        }
        if (flag)
            ip[i] = -1;
    }
    ip[ip.size() - 1] = -1;
}

void nextGreaterElement(vector<int> &ip)
{
    stack<int> s;
    for (int i = ip.size() - 1; i >= 0; i--)
    {
        int temp = ip[i];
        while (!s.empty() && s.top() < temp)
        {
            s.pop();
        }
        if (s.empty())
            ip[i] = -1;
        else
            ip[i] = s.top();
        s.push(temp);
    }
}



int main()
{
    vector<int> ip = {4, 10, 5, 8, 20, 15, 3, 12};
    printArray(ip);
    // prevSmallerElement(ip);
    // prevSmallerElementBruteForce(ip);
    // nextsmallerElementBruteForce(ip);
    // nextsmallerElement(ip);
    // prevGreaterElementBruteForce(ip);
    // prevGreaterElement(ip);
    // nextGreaterElementBruteForce(ip);
    nextGreaterElement(ip);
    printArray(ip);
    return 0;
}
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> v;
// bool func(int i, vector<int> &arr, int k, int sum)
// {
//     if (i >= arr.size())
//     {
//         if (sum == k)
//         {
//             for (int i = 0; i < v.size(); i++)
//             {
//                 cout << v[i] << " ";
//             }
//             cout << endl;
//             return true;
//         }
//         return false;
//     }
//     v.push_back(arr[i]);
//     sum += arr[i];
//     if (func(i + 1, arr, k, sum) == true)
//         return true;
//     v.pop_back();
//     sum -= arr[i];
//     if (func(i + 1, arr, k, sum) == true)
//         return true;
//     return false;
// }

// int main(int argc, char const *argv[])
// {
//     vector<int> arr = {1, 2, 1,3};
//     func(0, arr, 5, 0);
//     return 0;
// }

// counting number of subsequences whose sum is equal to K

#include <iostream>
#include <vector>
using namespace std;

int func(int i, vector<int> &arr, int k, int sum)
{
    if (i >= arr.size())
    {
        if (sum == k)
            return 1;
        return 0;
    }
    sum += arr[i];
    int l = func(i + 1, arr, k, sum);
    sum -= arr[i];
    int r = func(i + 1, arr, k, sum);
    return l + r;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, 1, 3};
    cout << func(0, arr, 50, 0) << endl;
    return 0;
}

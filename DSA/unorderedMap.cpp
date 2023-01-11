#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    unordered_map<int, int> Map;
    Map[0] = 2;
    Map[2] = 22;
    Map[1] = 222;
    for (int i = 0; i < 3; i++)
    {
        cout << Map[i] << " ";
    }
    cout << endl;
    sort(Map.begin(), Map.end());

    return 0;
}

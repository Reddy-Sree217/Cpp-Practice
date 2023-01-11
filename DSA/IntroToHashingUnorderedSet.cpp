#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{

    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(22);
    s.insert(22);
    s.insert(22); // Duplicates are added into set
    s.insert(22);
    s.insert(222);

    if (s.find(1) == s.end())
        cout << "Not Found" << endl;
    else
        cout << "Found" << endl;

    cout << s.count(1) << endl; // count() -> says whether element is present or not(count = 1 if present, 0 if not present)

    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }

    s.erase(222); // deletes the particular element from the set

    s.erase(s.begin(), s.end()); // Removes all elements
    cout << endl;
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }

    cout << endl
         << s.size() << endl;

    s.clear(); // Deletes all elements

    cout << endl
         << s.size() << endl;

    return 0;
}
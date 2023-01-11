#include <iostream>
#include <vector>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << endl;
    }
    cout<<endl;
}

int main()
{

    list<int> list1;     // Empty list of Size 0
    list<int> list2(5,1); // Empty list of Size 10
    list1.push_back(1);
    list1.push_back(111111);
    list1.push_back(111);
    list1.push_back(1);
    list1.push_back(11);
    list1.push_back(1111);
    list1.push_back(1111111);
    list1.push_back(11);
    display(list1);
    list1.pop_back();   //pops up the last element of the list
    display(list1);
    list1.pop_front();  //pop ups the first element of the list
    display(list1);
    list1.remove(111);  //removes the particular all element (111) from the list
    display(list1);
    cout<<list1.size()<<endl;

    list1.sort();    //sorts the list
    display(list1);
    
    list1.merge(list2); //merging list1 and list2
    display(list1);


    list1.reverse();    //reversing the list
    display(list1);

    return 0;
}
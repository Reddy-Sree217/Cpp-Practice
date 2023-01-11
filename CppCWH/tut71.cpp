#include <iostream>
#include <vector>
using namespace std;

template< class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main()
{

    vector<int> vec;
    int element;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the element" << endl;
        cin >> element;
        vec.push_back(element);
    }
    display(vec);   //prints vector


    vec.pop_back(); //Removes the last element of the vector
    display(vec);   //prints after popback()

    vector<int>::iterator iter = vec.begin();
    vec.insert(iter,55);
    display(vec);   //prints after insertion at begining

    vec.insert(iter+2,55); //insertion at begining+2
    display(vec);   //prints after insertion at begining+2

    vec.insert(iter,4,55); //insertion of 55 of 4 copies at begining
    display(vec);   //prints after insertion of 4 copies at begining


    //ways to define vector
    vector<int> vec1;     //vector of size 0
    vector<char> vec2(5);  //vector of size 5
    vector<char> vec3(vec2);  

    vector<double> vec4(6,12);  //vector of size 6 initialized with value 12

    display(vec4);

    return 0;
}
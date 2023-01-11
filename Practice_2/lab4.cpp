#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    // char c;
    // cout<<"Enter a character: "<<endl;
    // cin>>c;
    // if(c=='a'| c=='e'| c=='i'| c=='o'| c=='u'| c=='A'| c=='E'| c=='I'| c=='O'| c=='U'){
    //     cout<<"Its a vowel"<<endl;
    // }
    // else{
    //     cout<<"Its a consonent"<<endl;
    // }

    // int a;
    // cin>>a;
    // if(a>=5 & a<=10){
    //     cout<<"Hello,Sunny morning"<<endl;
    // }

    // else if(a>=11 & a<=16){
    //     cout<<"Good afternoon"<<endl;
    // }

    // else if(a>=17 & a<=19){
    //     cout<<"Good evening"<<endl;
    // }

    // else if(a>=20 & a<=22){
    //     cout<<"Good night"<<endl;
    // }

    // else{
    //     cout<<"Hi, Sleepy head"<<endl;
    // }

    // int a1, b1, c1;
    // int root1, root2;
    // cout << "Enter value of a1: " << endl;
    // cin >> a1;
    // cout << "Enter value of b1: " << endl;
    // cin >> b1;
    // cout << "Enter value of c1: " << endl;
    // cin >> c1;

    // if ((b1 * b1 - 4 * a1 * c1) < 0)
    // {
    //     cout << "Roots are imaginary";
    // }
    // else
    // {
    //     root1 = (-b1 + sqrt(b1 * b1 - 4 * a1 * c1)) / 2 * a1;
    //     root2 = (-b1 - sqrt(b1 * b1 - 4 * a1 * c1)) / 2 * a1;
    //     cout << "Roots are: " << root1 << "and" << root2;
    // }

    // int marks[5];
    // int totalMarks = 0;
    // cout << "Enter the marks of the subjects: " << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Subject-" << i + 1 << endl;
    //     cin >> marks[i];
    //     totalMarks += marks[i];
    // }
    // float avg = 0;
    // avg = (float)totalMarks / 5;
    // switch ((int)avg/10)
    // {
    // case 10:
    // case 9:
    //     cout << "A";
    //     break;

    // case 8:
    //     cout << "B";
    //     break;

    // case 7:
    //     cout << "C";
    //     break;
    // case 6:
    //     cout << "D";
    //     break;
    // case 5:
    //     cout << "E";
    //     break;

    // default:
    //     cout << "F";
    //     break;
    // }
    // return 0;

    float distanceTravelled = 0;
    int fare = 0;
    cout << "Enter the distance travelled: " << endl;
    cin >> distanceTravelled;
    if (distanceTravelled <= 12)
    {
        fare = 100;
        cout << "Fare is: " << fare << endl;
        exit(0);
    }

    if (12 < distanceTravelled <= 16)
    {
        fare = 100 + (distanceTravelled - 12) * 8;
    }

    if (16 < distanceTravelled <= 20)
    {
        fare = 132 + (distanceTravelled - 16) * 6;
    }

    if (distanceTravelled > 20)
    {
        fare = 132 + 24 + (distanceTravelled - 20) * 5;
    }

    cout << "Fare is: " << fare << endl;
}
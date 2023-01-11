#include <iostream>
using namespace std;
int main() 
{
    cout << "\n\n Check whether the primitive values crossing the limits or not :\n";
	cout << "--------------------------------------------------------------------\n";
   char gender = 'F';             // char is single-quoted
   bool isEmployed = true;         // true(non-zero) or false(0)
   unsigned short numOfchild = 2; // [0, 255]
   short yearOfAppt = 2009;      // [-32767, 32768]
   unsigned int YearlyPackage = 1500000;   // [0, 4294967295]
   double height = 79.48;       // With fractional part
   float gpa = 4.69f;           // Need suffix 'f' for float
   long totalDrawan = 12047235L;     // Suffix 'L' for long
   long long balance = 995324987LL;  // Need suffix 'LL' for long long int  

   cout << " The Gender is : " << gender << endl;
   cout << " Is she married? : " << isEmployed << endl;
   cout << " Number of sons she has : " << numOfchild << endl;
   cout << " Year of her appointment : " << yearOfAppt << endl;
   cout << " Salary for a year : " << YearlyPackage << endl;
   cout << " Height is : " << height << endl;
   cout << " GPA is " << gpa << endl;
   cout << " Salary drawn upto : " << totalDrawan << endl;
   cout << " Balance till : " << balance << endl;   
   return 0;
}

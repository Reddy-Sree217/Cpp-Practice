#include<iostream>
using namespace std;
struct Books{
char title[50];
char author[50];
int book_id;
};
int main(){
struct Books Book1;
cin >> Book1.title >> Book1.author  >> Book1.book_id;
cerr << Book1.title<<endl<<Book1.author<<endl<<Book1.book_id<<endl;
return 0;
}

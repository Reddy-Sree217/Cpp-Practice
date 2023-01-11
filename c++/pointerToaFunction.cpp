/*
#include<iostream>
#include<ctime>
using namespace std;

void getSeconds(unsigned long* ptr){
*ptr = time(NULL);
return;
}

int main(){
unsigned long sec;
getSeconds(&sec);
cout<<sec<<endl;
return 0;
}

*/

#include<iostream>
using namespace std;

int getSum(int* ptr ,int size){
int sum=0;
for(int i=0;i<size;i++){
sum+=*(ptr+i);
}
return sum;
}

int main(){
int arr[5]={1,2,3,4,5};
int sum=getSum(arr,5);
cout<<sum<<endl;
return 0;
}





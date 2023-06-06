#include<iostream>
using namespace std;
int main(){
int a=5;
int *p;
p=&a;
cout<<p<<endl;
cout<<&a<<endl;
cout<<*p<<endl;
*p=76;
cout<<a<<endl;
cout<<p+8<<endl;
return 0;
}
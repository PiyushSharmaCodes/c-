#include<iostream>
#include<algorithm>

using namespace std;

void printArray(int a[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }
    
}
void reverseArray(int reverse[] , int size){
    for (int i = 0; i < size/2; i++)
    {
        swap(reverse[i],reverse[size-i-1]);
    }
    
}
void swap(int &a, int &b) {
   int t = a;
   a = b;
   b = t;
}

int main(){
    int array[10];
    cout<<"Input Elements of array"<<endl;
    for(int i =0; i<10;i++){
        cin>>array[i];
    }
    // printArray(array,10);
    reverseArray(array,10);

    cout<<endl<<endl;
    printArray(array,10);
    return 0;
}
#include<iostream>
using namespace std;

void Insertion_Sort(int array[],int n){
    int key;
for (int i = 1; i < n; i++)
{
    key=array[i];
   int j=i-1;
    while (j>=0&&array[j]>key)
    {
        array[j+1]=array[j];
        j--;
    }
    array[j+1]=key;
    
}

}
int main(){
int arr[10],n;
cout<<"enter the size of array";
cin>>n;
cout<<"enter the elements of array\n";
for (int i = 0; i < n; i++)
{
   cin>>arr[i];
}
Insertion_Sort(arr,n);
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}
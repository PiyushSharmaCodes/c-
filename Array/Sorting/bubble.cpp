#include<iostream>
using namespace std;
void Bubble_Sort(int array[], int n)
{
    int min_idx;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 1; j<n-i ; j++)
        {
            if (array[j-1]>array[j])
            {
                swap(array[j],array[j-1]);
            }
            
        }
         
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
Bubble_Sort(arr,n);
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}
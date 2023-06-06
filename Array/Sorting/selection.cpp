#include<iostream>
using namespace std;
void Selection_Sort(int array[], int n)
{
    int min_idx;
    for (int i = 0; i < n-1; i++)
    {
        min_idx=i;
        for (int j = i+1; j<n ; j++)
        {
            if (array[j]<array[min_idx])
            {
               min_idx=j;
            }
            
        }
        if (min_idx!=i)
        {
            swap(array[min_idx],array[i]);
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
Selection_Sort(arr,n);
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}
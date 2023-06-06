#include<iostream>
#include <bits/stdc++.h>

using namespace std;



int main(){

    int arr[20],n;
    int target,low,high,mid;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"Enter the Array\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter target Element";
    cin>>target;
    
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        cout<<mid;
        if (arr[mid]==target)
        {
            cout<<"Found at "<<mid<<"th index in the Array ";
            return 0;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        
    }

    cout<<"Element is not found";
    return 0;
    
    

    
}
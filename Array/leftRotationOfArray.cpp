#include<iostream>
#include <deque>
using namespace std;
int main(){
int array[10];
int d;
cout<<"Enter the values in array\n";
for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
{
    cin>>array[i];
}
cout<<"Enter the rotation point";
cin>>d;

// ⁡⁢⁣⁢//Approach one - using a temporary array
After rotating d positions to the left, the first d elements become the last d elements of the array

First store the elements from index d to N-1 into the temp array.
Then store the first d elements of the original array into the temp array.
Copy back the elements of the temp array into the original array 

// int temp[10];
// int k=0;
// for (int i = d; i < sizeof(array)/sizeof(array[0]); i++)
// {
//     temp[k]=array[i];
//     k++;
// }
// for (int i = 0; i < d; i++)
// {
//     temp[k]=array[i];
//     k++;
// }
// for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
// {
//     array[i]=temp[i];
// }
// for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
// {
//     cout<<array[i]<<" ";
// }   


⁡⁣⁢⁢//Approach two - using one by one rotation
At each iteration, shift the elements by one position to the left circularly (i.e., first element becomes the last).
Perform this operation d times to rotate the elements to the left by d position.

// int temp;
// int k=0;
// while(k < d)
// {
//     temp=array[0];
//     for (int i = 0; i < sizeof(array)/sizeof(array[0]) - 1; i++)
//     {
//         array[i]=array[i+1];
//     }
//     array[sizeof(array)/sizeof(array[0])-1]=temp;
//     k++;
// }

// for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
// {
//     cout<<array[i]<<" ";
// }

// ⁡⁢⁣⁣Approach three- using deque⁡
int temp;
deque<int> dq;
for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
{
    dq.push_back(array[i]);
}
for (int i = 0; i < d; i++)
{
    temp=dq.front();
    dq.pop_front();
    dq.push_back(temp);
}
for(auto it=dq.begin(); it!=dq.end(); it++) {
        cout << *it << " ";
    }

// Approach four  (A Juggling Algorithm)    
// Instead of moving one by one, divide the array into different sets where the number of sets is equal to the GCD of N and d (say X. So the elements which are X distance apart are part of a set) and rotate the elements within sets by 1 position to the left. 

// Calculate the GCD between the length and the distance to be moved.
// The elements are only shifted within the sets.
// We start with temp = arr[0] and keep moving arr[I+d] to arr[I] and finally store temp at the right place.
    
    
return 0;
}
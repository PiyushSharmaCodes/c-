#include<iostream>
#include<vector>

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for (int i = 0; i < nums2.size; i++)
        {
            nums1.push_back(nums2.at(i));
        }
        sort(nums1.begin(),nums1.end());

    }

int main(){

    return 0;
}
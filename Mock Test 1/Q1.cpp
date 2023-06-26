/*
Move Zeroes
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:
Input: nums = [0]
Output: [0]

Constraints:
a. 1 <= nums.length <= 10^4
b. -2^31 <= nums[i] <= 2^31 - 1

Note: Create a GitHub file for the solution and add the file link the the answer section below.
*/

#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int> &nums){
    int n=nums.size();
    int i=0;
    for(int j=0;j<n;j++){
        if(nums[j]!=0){
            swap(nums[i],nums[j]);
            i++;
        }
    }
}
int main(){
    vector<int> nums={0,1,0,3,12};
    int n=nums.size();
    
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    moveZeroes(nums);

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}
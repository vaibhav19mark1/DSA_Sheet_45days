// Move xeroes to end of array inplace

#include<iostream>
#include<vector>
using namespace std;

// Snowball gets bigger and bigger as it finds zeroes and we change the values in array instead of swapping
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(),snowball=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) snowball++;
            else if(snowball>0){
                nums[i-snowball]=nums[i];
                nums[i]=0;
            }
        }
    }
};

class Solution {
    public:
        void moveZeros(vector<int>& nums){
            int n=nums.size(),j=0;
            for(int i=0;i<n;i++){
                if(nums[i]!=0){
                    swap(nums[i],nums[j++]);
                }
            }
        }
};
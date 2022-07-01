// Find the single duplicate element

#include<iostream>
#include<vector>
using namespace std;

// Solution 1 ------ Swapping 0th element with the nums[0]th element till equals are found
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        while(nums[0]!=nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];
    }
};

// Solution 2 ------------ Counting the freqeuncy of all elements
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int count[100001]={0};
        int n=nums.size();
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
        for(int i=0;i<100001;i++){
            if(count[i]>1){
                return i;
            }
        }
        return 0;
    }
};
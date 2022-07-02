// Remove duplicates from sorted array

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]) c++;
            else nums[i-c]=nums[i];
        }
        return n-c;
    }
};
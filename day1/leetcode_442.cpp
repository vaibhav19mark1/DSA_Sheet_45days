// Find all duplicates in array

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(nums[abs(nums[i])-1]<0) ans.push_back(abs(nums[i]));
            nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
        }
        return ans;
    }
};


// The approach is to make the elements -ve as we traverse them and pushing only those elements which are -ve as they are the one
// that occur twice.
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> v(k,0);
        v[0]=1;
        int psum=0,ans=0;
        for(auto n:nums){
            psum=(psum+n)%k;
            if(psum<0) psum+=k;
            ans+=v[psum];
            v[psum]++;
        }
        return ans;
    }
};

// We find the prefix sum and mod it with k to check if the prefic sum is divisible by k.
// If it comes out to be -ve we add k to make it +ve as playing with +ve numbers is easier.
// We then increase the count of v[prefix sum] and add its value to the ans before incrementing
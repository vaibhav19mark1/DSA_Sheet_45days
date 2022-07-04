#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int i=0,j=height.size()-1;
        while(i<j){
            int h=min(height[i],height[j]);
            if(ans<(j-i)*h){
                ans=(j-i)*h;
            }
            if(height[i]==h) i++;
            else j--;
        }
        return ans;
    }
};
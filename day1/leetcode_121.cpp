// Best time to buy and sell stock

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0,lmin=prices[0];
        for(int i=0;i<n;i++){
            if(prices[i]<lmin) lmin=prices[i];
            if(prices[i]-lmin>profit) profit=prices[i]-lmin;
        }
        return profit;
    }
};
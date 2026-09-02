class Solution {
public:
    int mincoin(int index,vector<int>& coins, int amount,vector<vector<int>>&dp){
        if(amount==0){
            return 0;
        }
        if(index>=coins.size()||amount<0){
            return 1e9;
        }
        if(dp[index][amount]!=-1){
            return dp[index][amount];
        }
       return dp[index][amount]=min(1+mincoin(index,coins,amount-coins[index],dp),mincoin(index+1,coins,amount,dp));
    }
    int coinChange(vector<int>& coins, int amount) {
       
       vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,-1));
       int ans= mincoin(0,coins,amount,dp);
       return ans>=1e9? -1:ans;
    }
};

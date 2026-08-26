class Solution {
public:
    int maxprofit(int index,vector<int>&nums,vector<int>&dp){
        if(index==0){
            return nums[0];
        }
        if(index==1){
            return max(nums[0],nums[1]);
        }
        if(dp[index]!=-1){
            return dp[index];
        }
        return dp[index]=max(nums[index]+maxprofit(index-2,nums,dp),maxprofit(index-1,nums,dp));
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return maxprofit(nums.size()-1,nums,dp);
    }
};

class Solution {
public:
    void sum(int index, vector<vector<int>>&ans,vector<int>&temp,int target,vector<int>&nums){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(index>=nums.size()||target<0){
            return;
        }
        temp.push_back(nums[index]);
        sum(index,ans,temp,target-nums[index],nums);
        temp.pop_back();
        sum(index+1,ans,temp,target,nums);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        sum(0,ans,temp,target,nums);
        return ans;

    }
};

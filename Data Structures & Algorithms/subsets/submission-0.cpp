class Solution {
public:
    void allsubset(int index,vector<int>&temp, vector<vector<int>>&ans,vector<int>&nums){
        if(index==nums.size()){
            ans.push_back(temp);
            return;
        }
        allsubset(index+1,temp,ans,nums);
         temp.push_back(nums[index]);
         allsubset(index+1,temp,ans,nums);
         temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
        allsubset(0,temp,ans,nums);
        return ans;
    }
};

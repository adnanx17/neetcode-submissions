class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>temp;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            temp.push_back({nums[i],i});
        }

        sort(temp.begin(),temp.end());
        int start=0;
        int end=temp.size()-1;
        while(start<end){
           if(temp[start].first+temp[end].first==target){
               ans.push_back(temp[start].second);
               ans.push_back(temp[end].second);
               sort(ans.begin(),ans.end());
               return ans;
           }
           else if(temp[start].first+temp[end].first>target){
               end--;
           }
           else{
            start++;
           }
        }
        return ans;
    }
};

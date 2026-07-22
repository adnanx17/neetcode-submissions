class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        priority_queue<pair<int,int>>pq;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            if(m.count(nums[i])){
                m[nums[i]]++;
            }
            else{
                m[nums[i]]=1;
            }
        }

        for(auto&p:m){
            pq.push({p.second,p.first});
        }

        while(k){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }

        return ans;
    }

};

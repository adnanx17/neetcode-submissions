class Solution {
public:
    int findMin(vector<int> &arr) {
        int start=1;
        int end=arr.size()-1;
        int ans=arr[0];
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]>arr[0]){
                start=mid+1;
            }
            else{
               ans=min(ans,arr[mid]);
               end=mid-1;
            }
        }

        return ans;
    }
};

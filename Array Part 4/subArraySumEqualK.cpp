class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(),sum=0,count=0;
        unordered_map<int,int>mpp;
        mpp[sum]=1;

        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(mpp.find(sum-k)!=mpp.end()){
                count+=mpp[sum-k];         //to check middle subarrays 
            }
            mpp[sum]++;
        }

        return count;

    }
};
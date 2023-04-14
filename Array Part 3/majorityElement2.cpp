class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;

        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto x: mpp){
            if(x.second > n/3){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(),ele,maxv=1;
        unordered_map<int,int> mpp;
        
        for(int i=0;i<n;i++){
           mpp[nums[i]]++;
        }
        
        for(auto x: mpp){
            maxv=max(maxv,x.second);
            if(x.second==maxv){
                ele=x.first;
            }
        }
        
        return ele;
    }
};
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



class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=-1,count=0;
        for(auto x:nums){
            if(count==0)
                ans=x;
            if(x==ans)
                count++;
            else{
                count--;
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        int n=nums.size(),temp,count=0;
        vector<int>ans;
        vector<int>freq(102,0);;
        
        for(int i=0;i<k-1;i++){
            freq[nums[i]+50]+=1;
        }
        
        for(int i=0;i<n-k+1;i++){
            temp=0;
            freq[nums[i+k-1]+50]+=1;
            for(int j=0;j<50;j++){
                temp+=freq[j];
                if(temp>=x){
                    ans.push_back(j-50);
                    break;
                }
            }
            
            
            if(temp<x){
                ans.push_back(0);
            }
            freq[nums[i]+50]-=1;
        }
    
        return ans;
    }
};
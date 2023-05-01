class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        vector<int>temp;
        int n=nums.size(),prev=INT_MAX,low,high,sum;
        for(int i=0;i<n-2;i++){
            if(i==0 or  (i>0 and nums[i]!=nums[i-1])){
                low=i+1;
                high=n-1;
                sum=0-nums[i];
                while(low<high){
                    if(nums[low]+nums[high]==sum){
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        ans.push_back(temp);
                        temp.clear();

                        while(low<high and nums[low]==nums[low+1]){
                            low++;
                        }
                        while(low<high and nums[high]==nums[high-1]){
                            high--;
                        }
                        low++;
                        high--;
                    }
                    else if(nums[low]+nums[high]<sum){
                       low++;
                    }
                    else{
                        high--;
                    }
                }
            }
            
        }
        return ans;
    }
};
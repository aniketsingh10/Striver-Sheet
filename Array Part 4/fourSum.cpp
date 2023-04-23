class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        long long n=nums.size(),low,high,sum=0;
        vector<vector<int>>ans;

        vector<int>temp;
        for(int i=0;i<n-3;i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            for(int j=i+1;j<n-2;j++){
                if(j!=(i+1) && nums[j]==nums[j-1])
                    continue;
                low=j+1;
                high=n-1;
                sum=(long)target-(long)nums[j]-(long)nums[i];

                while(low<high){
                    if((long)nums[low]+(long)nums[high]==sum){
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);

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
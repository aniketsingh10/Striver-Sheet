class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size(),count=0,maxi=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
            }
            else{
                maxi=max(count,maxi);
                count=0;
            }
        }
        return max(count,maxi);
    }
};
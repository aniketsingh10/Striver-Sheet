class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0,n=nums.size();
        
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1] and nums[i]!=nums[k]){
                k++;
                nums[k]=nums[i];
            }
        }
        return k+1;
    }
};
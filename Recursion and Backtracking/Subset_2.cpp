class Solution {
public:
    vector<vector<int>>arr;
    void sub(vector<int>& nums,int index,vector<int>output){
        arr.push_back(output);
        for(int i=index;i<nums.size();i++){
            if(i!=index and nums[i]==nums[i-1]) continue;
            output.push_back(nums[i]);
            sub(nums,i+1,output);
            output.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> out;
        sort(nums.begin(),nums.end());
        sub(nums,0,out);
        
        return arr;    
    }
};
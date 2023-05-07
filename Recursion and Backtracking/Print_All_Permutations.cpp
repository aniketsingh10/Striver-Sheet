class Solution {
public:
    vector<vector<int>>ans;
    void solver(vector<int>&nums, vector<int>&temp,int id,vector<bool>&vis){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(!vis[i]){
                vis[i]=true;
                temp.push_back(nums[i]);
                solver(nums,temp,i+1,vis);
                temp.pop_back();
                vis[i]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>temp;
        vector<bool>vis(nums.size(),false);
        solver(nums,temp,0,vis);
        return ans;
    }
};
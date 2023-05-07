class Solution {
public:
    vector<string>ans;
    void solver(string &nums, string &temp,int id,vector<bool>&vis){
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
    void permute(string& nums) {
        string temp="";
        vector<bool>vis(nums.size(),false);
        solver(nums,temp,0,vis);
        
    }

    string getPermutation(int n, int k) {
        long long a=0;
        for(int i=1;i<=n;i++){
            a*=10;
            a+=i;
        }
        string abc=to_string(a);
        permute(abc);
        return ans[k-1];
    }
};
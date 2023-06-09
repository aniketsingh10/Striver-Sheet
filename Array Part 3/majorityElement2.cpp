class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;

        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto x: mpp){
            if(x.second > n/3){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};




class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1=0,c2=0,e1=-1,e2=-1,n=nums.size();
        for(auto x: nums){
            if(x==e1){
                c1++;
            }
            else if(x==e2){
                c2++;
            }
            else if(c1==0){
                e1=x;
                c1=1;
            }
            else if(c2==0){
                e2=x;
                c2=1;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1=0,c2=0;
        for(auto x: nums){
            if(x==e1){
                c1++;
            }
            else if(x==e2){
                c2++;
            }
        }
        vector<int>ans;
        if(c1 > n/3){
            ans.push_back(e1);
        }
        if(c2 > n/3){
            ans.push_back(e2);
        }
        return ans;

    }
};
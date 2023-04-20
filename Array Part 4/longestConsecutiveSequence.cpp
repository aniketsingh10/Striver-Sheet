class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(),curr,count,maxi=0;
        set<int>st;
        for(auto x: nums){
            st.insert(x);
        }

        for(int x: st){
            if(!st.count(x-1)){
                curr=x;
                count=1;
                while(st.count(curr+1)){
                    curr++;
                    count++;
                }
                maxi=max(maxi,count);
            }
        }

        return maxi;
    }
};
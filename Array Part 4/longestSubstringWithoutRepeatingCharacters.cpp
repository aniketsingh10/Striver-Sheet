class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>arr(256,-1);
        int l=0,r=0,maxi=0,n=s.size();

        while(r<n){
            if(arr[s[r]]!=-1){
                l=max(l,arr[s[r]]+1);  // if char is repeated move left
            }
            arr[s[r]]=r;
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};
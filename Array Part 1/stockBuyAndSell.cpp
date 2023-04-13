class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int minv=arr[0];
        int maxv=INT_MIN;
        
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            minv=min(minv,arr[i]);
            maxv=max(maxv,arr[i]-minv);
        }
        return maxv;
    }
};
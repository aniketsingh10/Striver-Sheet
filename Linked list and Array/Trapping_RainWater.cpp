class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size(),ans=0;
        vector<int>prefix_max(n,0);
        vector<int>suffix_max(n,0);

        prefix_max[0]=height[0];
        suffix_max[n-1]=height[n-1];

        for(int i=1;i<n;i++){
            prefix_max[i]=max(prefix_max[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--){
            suffix_max[i]=max(suffix_max[i+1],height[i]);
        }
        
        for(int i=0;i<n;i++){
            if(min(prefix_max[i],suffix_max[i]) >  height[i]){
                ans+=(min(prefix_max[i],suffix_max[i])-height[i]);
            }
        }
        return ans;
    }
};
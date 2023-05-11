class Solution {
public:
    bool ispossible(int mid,int k,int n, vector<int>&arr){
        int sum=0,count=1;
        for(int i=0;i<n;i++){
            if(sum+arr[i] <= mid){
                sum+=arr[i];
            }
            else if(arr[i]<=mid){
                count++;
                sum=0;
                sum+=arr[i];
            }
            else{
                return false;
            }
        }
        if(count>k){
            return false;
        }
        return true;
    }
    int shipWithinDays(vector<int>& arr, int k) {
        int n=arr.size();
        int low=arr[0],high=0,mid,ans;
        for(int i=0;i<n;i++){
            high+=arr[i];
        }
        ans=high;

        while(low<=high){
            mid=low+(high-low)/2;
            if(ispossible(mid,k,n,arr)){
                ans=min(ans,mid);
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
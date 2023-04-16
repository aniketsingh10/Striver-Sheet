//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    long long count=0;
    void merge(long long nums[], int low,int mid, int high){
        int j=mid+1;
        // counts the reverse pairs
        for(int i=low;i<=mid;i++){
            while(j<=high and nums[i]>nums[j]){
                j++;
            }
            count+=j-(mid+1);          // 1 2 3    1 3
        }
        // sort it into a temp vector
        vector<long long>temp;
        int left=low,right=mid+1;

        while(left<=mid and right<=high){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left++]);
            }
            else{
                temp.push_back(nums[right++]);
            }
        }

        while(left<=mid){
            temp.push_back(nums[left++]);
        }
        while(right<=high){
            temp.push_back(nums[right++]);  
        }

        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }
    }

    void mergesort(long long nums[], int low, int high){
        if(low>=high){
            return;
        }
        int mid = low+(high-low)/2;
        mergesort(nums,low,mid); //left call
        mergesort(nums,mid+1,high); //right call
        merge(nums,low,mid,high); // merge
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        mergesort(arr,0,N-1);
        return count;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends
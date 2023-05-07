//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int>ans;
    void solver(vector<int>&arr,int n,int id,int sum){
        if(id==n){
            ans.push_back(sum); // if id==n push the sum in vector
            return;
        }
        solver(arr,n,id+1,sum+arr[id]); // pick the element and add it
        solver(arr,n,id+1,sum); // do not add
        
    }
    vector<int> subsetSums(vector<int> arr, int N){
        solver(arr,N,0,0);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
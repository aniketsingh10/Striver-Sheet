class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());

        vector<vector<int>>ans;
        vector<int>temp;
        temp.push_back(arr[0][0]);
        temp.push_back(arr[0][1]);

        for(int i=1;i<n;i++){
            if(arr[i][0]<=temp[1]){
                temp[1]=max(temp[1],arr[i][1]);
            }
            else{
                ans.push_back(temp);
                temp.clear();
                temp.push_back(arr[i][0]);
                temp.push_back(arr[i][1]);
            }
        }
        ans.push_back(temp);

        return ans;
    }
};
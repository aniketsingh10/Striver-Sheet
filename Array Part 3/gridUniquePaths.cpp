class Solution {
public:
    int solver(vector<vector<int>>&dp,int ans, int i,int j, int m, int n){
        if(i>=m or j>=n){
            return 0;
        }
        if(i==m-1 and j==n-1){
            return 1;
        }

        if(dp[i][j]!=0){
            return dp[i][j];
        }
        return dp[i][j]=solver(dp,0,i,j+1,m,n)+solver(dp,0,i+1,j,m,n);
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,0));
        return solver(dp,0,0,0,m,n);
    }
}
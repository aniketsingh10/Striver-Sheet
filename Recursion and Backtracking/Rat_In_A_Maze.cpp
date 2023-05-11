// User function template for C++

class Solution{
    public:
    vector<string>ans;
    
    void dfs(vector<vector<int>> &m, int n,int i,int j,string temp){
        if(i>=n or j>=n or i<0 or j<0 or m[i][j]==0){
            return;
        }
        if(i==n-1 and j==n-1){
            ans.push_back(temp);
            return;
        }
        
        m[i][j]=0;
        dfs(m,n,i+1,j,temp+'D');
        dfs(m,n,i,j+1,temp+'R');
        dfs(m,n,i-1,j,temp+'U');
        dfs(m,n,i,j-1,temp+'L');
        m[i][j]=1;
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        string temp="";
        if(m[0][0]==1){
            dfs(m,n,0,0,temp);
        }
        return ans;
    }
};

    
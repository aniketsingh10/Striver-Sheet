class Solution {
public:
    vector<int>dp;
    int solver(string &s, set<string>&st, int n, int id){
        if(id==n){
            return 1;
        }

        if(dp[id]!=-1)
            return dp[id];

        string temp="";
        for(int i=id;i<n;i++){
            temp+=s[i];
            if(st.find(temp)!=st.end()){
                if(solver(s,st,n,i+1)) 
                    return dp[i]=1;
            }
        }
        return dp[id]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string>st;
        dp.resize(301,-1);
        for(auto x:wordDict){
            st.insert(x);
        }
        return solver(s,st,s.size(),0);

    }
};
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    
    static bool comp(pair<int,int>a , pair<int,int>b){
        return a.second < b.second;
    }
    
    
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> vec;
   
        for(int i=0;i<n;i++){
            vec.emplace_back(make_pair(start[i],end[i]));
        }
        
        sort(vec.begin(),vec.end(),comp);
        
        int count=1;
        int ending=vec[0].second;
        
        for(int i=1;i<n;i++){
            if(vec[i].first > ending){
                count++;
                ending=vec[i].second;
            }
        }
        
        return count;
        
        
        // for(auto x: vec){
        //     cout<<x.first<<" "<<x.second<< endl;
        // }
        
        // return 1;
    }
};
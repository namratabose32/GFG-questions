int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int> m;
        int s=0,ans=0;
        for(int i=0;i<n;i++){
            s+=A[i];
            if(m.find(s)!=m.end()){
                ans=max(ans,i-m[s]);
            }
            if(s==0)
                ans=max(ans,i+1);
            if(m.find(s)==m.end())
                m[s]=i;
        }return ans;
    }

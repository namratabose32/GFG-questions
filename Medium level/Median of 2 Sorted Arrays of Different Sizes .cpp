public:
    double MedianOfArrays(vector<int>& a1, vector<int>& a2)
    {
        // Your code goes here
        int i=0,j=0,n1=a1.size(),n2=a2.size();
        vector<int> ans;
        while(i<n1 && j<n2){
            if(a1[i]<a2[j])
                ans.push_back(a1[i++]);
            else
                ans.push_back(a2[j++]);
        }
        while(i<n1){
            ans.push_back(a1[i++]);
        }
        while(j<n2){
            ans.push_back(a2[j++]);
        }int n=n1+n2;
        if((n1+n2)%2==0){
            return (ans[n/2]+ans[(n-1)/2])/2.0;
        }
        return ans[n/2];
    }

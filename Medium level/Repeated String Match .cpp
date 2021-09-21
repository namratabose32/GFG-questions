int repeatedStringMatch(string A, string B) 
    {
        // Your code goes here
        string str=A;
        int n=B.length()/A.length() +2;
        for(int i=0;i<n;i++){
            if(str.find(B)!=string::npos)
                return i+1;
            str+=A;
        }return -1;
    }

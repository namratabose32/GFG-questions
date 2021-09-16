public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i=0,j=0,c=0,ans;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                ans=arr1[i];
                i++;
            }else{
                ans=arr2[j];
                j++;
            }c++;
            if(c==k)
                return ans;
        }
        while(i<n){
            ans=arr1[i];
            i++;
            c++;
            if(c==k)
                break;
        }
        while(j<m){
            ans=arr2[j];
            j++;
            c++;
            if(c==k)
                break;
        }
        return ans;
    }

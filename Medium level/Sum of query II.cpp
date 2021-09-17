class Solution{
public:
   vector<int> querySum(int n, int arr[], int q, int queries[])
   {
       // code here
       vector<int> psum(n); 
   psum[0]= arr[0]; 
   for(int i = 1 ;i< n; i++)
   {
       psum[i]= arr[i] + psum[i-1]; 
   }
   vector<int> ans;
   for(int i =0;i<2*q-1;i+=2)
   {
       int x= queries[i]-2; 
       int y = queries[i+1]-1;
       int sum = 0;
       if(x>=0)
       {
           sum = psum[y]- psum[x]; 
           
       }
       else sum = psum[y];
   
       ans.push_back(sum);
   }
   return ans;
   }

public:
    int maxCandy(int height[], int n) 
    { 
        // Your code goes here
        int i=0,j=n-1,mn,d,area=0;
        d=j-i-1;
        while(i<j){
            d=j-i-1;
            mn=min(height[i],height[j]);
            area=max(area,d*mn);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }return area;
    } 

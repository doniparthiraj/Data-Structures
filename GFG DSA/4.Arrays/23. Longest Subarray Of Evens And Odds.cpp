class Solution{
    public:
    int maxEvenOdd(int arr[], int n) 
    { 
        int cnt=1,ans=0;
       for(int i=0;i<n;i++)
       arr[i]%=2;
       for(int i=0;i<n-1;i++)
       {
           if( (arr[i]==0 && arr[i+1]==1)||(arr[i]==1 && arr[i+1]==0) )
           {
           cnt++;
           continue;
           }
           ans=max(ans,cnt);
           cnt=1;
       }
       ans=max(ans,cnt);
       return ans;
    } 
};

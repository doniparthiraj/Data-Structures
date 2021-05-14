class Solution
{
    public:
    static int check(int pat,int arr[],int n)
    {
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if( (pat&arr[i])==pat)
            cnt++;
        }
        return cnt;
    }
    int maxAND (int arr[], int n)
    {
        int res=0,cnt=0;
        for(int i=31;i>=0;i--)
        {
            cnt=check(res|(1<<i),arr,n);
            if(cnt>=2)
            res|=(1<<i);
        }
        return res;
    }
};

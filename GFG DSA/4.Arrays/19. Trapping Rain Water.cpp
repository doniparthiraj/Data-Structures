int trappingWater(int arr[], int n)
    {
        int l[n],r[n],mx=arr[0];
        l[0]=arr[0],r[n-1]=arr[n-1];
        for(int i=1;i<n;i++)
        {
            if(mx<arr[i])
            {
            l[i]=arr[i];
            mx=arr[i];
            }
            else
            l[i]=mx;
        }
        mx=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(mx<arr[i])
            {
            r[i]=arr[i];
            mx=arr[i];
            }
            else
            r[i]=mx;
        }
        int res=0;
        for(int i=1;i<n;i++)
            res+=min(r[i],l[i])-arr[i];
        return res;
    }

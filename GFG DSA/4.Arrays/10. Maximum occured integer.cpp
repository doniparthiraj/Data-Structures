int maxOccured(int L[], int R[], int n, int maxx)
    {
        int a[maxx]={0};
        for(int i=0;i<n;i++)
        {
            a[L[i]]++;
            a[R[i]+1]--;
        }
        int ind=0,mx=a[0];
        for(int i=1;i<maxx;i++)
        {
            a[i]+=a[i-1];
            if(mx<a[i])
            {
                mx=a[i];
                ind=i;
            }
        }
        return ind;
    }

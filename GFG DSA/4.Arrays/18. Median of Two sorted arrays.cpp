int findMedian(int arr[], int n, int brr[], int m)
    {
        int i=0,j=0;
        double M=-1,N=-1;
        if((n+m)%2)
        {
            for(int cnt=0;cnt<=(m+n)/2;cnt++)
            {
                if(arr[i]<brr[j])
                    M=arr[i++];
                else
                    M=brr[j++];
            }
            return M;
        }
        else
        {
            for(int cnt=0;cnt<=(m+n)/2;cnt++)
            {
                N=M;
                if(arr[i]<brr[j])
                    M=arr[i++];
                else
                    M=brr[j++];
            }
            return (M+N)/2;
        }
    }

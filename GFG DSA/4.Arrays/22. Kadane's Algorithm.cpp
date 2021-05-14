int maxSubarraySum(int arr[], int n)
    {
        int sum=arr[0],ans=arr[0];
        for(int i=1;i<n;i++)
        {
            if((sum+arr[i])>arr[i])
            sum+=arr[i];
            else
            sum=arr[i];
            ans=max(sum,ans);
        }
        return ans;
    }

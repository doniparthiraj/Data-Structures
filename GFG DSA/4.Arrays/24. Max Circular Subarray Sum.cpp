class Solution{
    private:
    int bestlinear(int arr[],int n)
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
    public:
    int circularSubarraySum(int arr[], int num)
    {
        int linsum=bestlinear(arr,num),cirsum=0,cnt=0;
        for(int i=0;i<num;i++)
        {
            cirsum+=arr[i];
            arr[i]=-arr[i];
            if(arr[i]>0)
            cnt++;
        }
        cirsum=cirsum+bestlinear(arr,num);
        if(cnt==num)
        return linsum;
        else 
        return max(cirsum,linsum);
    }
};

 int digitalRoot(int n)
    {
        if(n==0)
        return 0;
        int sum=0;
        while(n)
        {
            sum+=(n%10);
            n/=10;
        }
        if(sum%9==0)
        return 9;
        return (sum%9);
    }

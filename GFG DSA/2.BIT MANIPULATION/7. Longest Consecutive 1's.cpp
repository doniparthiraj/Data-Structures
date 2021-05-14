int maxConsecutiveOnes(int n)
    {
        int cnt=0,ans=0;
        while(n)
        {
            if(n&1)
            {
                cnt++;
                ans=max(ans,cnt);
                n>>=1;
                continue;
            }
            cnt=0;
            n>>=1;
        }
        return ans;
    }

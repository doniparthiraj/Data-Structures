bool isSparse(int n)
    {
        int cnt=0;
        while(n)
        {
            if(n&1)
            {
            cnt++;
            if(cnt>=2)
            return false;
            }
            else
            cnt=0;
            n>>=1;
        }
        return true;
    }

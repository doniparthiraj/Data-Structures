int countDigits(int n)
    {
        if(n==0)
        return 1;
       int cnt=0;
       while(n)
       {
           cnt++;
           n/=10;
       }
       return cnt;
    }

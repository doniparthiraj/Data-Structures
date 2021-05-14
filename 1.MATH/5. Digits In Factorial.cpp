int digitsInFactorial(int N)
    {
        double cnt=0;
        while(N>0)
        {
            cnt+=log10(N);
            N--;
        }
        return cnt+1;
    }

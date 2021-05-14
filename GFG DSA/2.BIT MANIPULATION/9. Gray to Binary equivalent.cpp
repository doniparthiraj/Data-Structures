int grayToBinary(int n)
    {
        int x=n;
        while(n>=1)
        {
            n>>=1;
            x^=n;
        }
        return x;
    }

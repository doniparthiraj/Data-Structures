unsigned int swapBits(unsigned int n)
    {
        int res=0;
    	for(int i=0;i<=31;i++)
    	{
    	    if(n&(1<<i)){
    	    if(i%2==0)
    	    res|=(1<<(i+1));
    	    else
    	    res|=(1<<(i-1));
    	    }
    	}
    	return res;
    }

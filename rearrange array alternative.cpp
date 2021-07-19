class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
        void rearrange(long long *a, long long n) 
    { 
        int maxind=n-1,minind=0;
        int maxele=a[n-1]+1;
    	for( int  i=0;i<n;i++)
    	{
    	    if(i%2==0)
    	    {
    	    a[i]=a[i]+(a[maxind]%maxele)*maxele;
    	    maxind--;
    	    }
    	    else
    	    {
    	        a[i]=a[i]+(a[minind]%maxele)*maxele;
    	        minind++;
    	    }
    	}
    	for(int i=0;i<n;i++)
    	a[i]=a[i]/maxele;
    	
    	 
    }
};


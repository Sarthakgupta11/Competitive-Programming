class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, long long n) 
    { 
    	int b[n];
    	int j=n-1,x=0;
    	for( int  i=0;i<n;i++)
    	{
    	    if(i%2==0)
    	    {
    	    b[i]=arr[j--];
    	    }
    	    else
    	    {
    	    b[i]=arr[x++];
    	    }
    	}
    	for(int i=0;i<n;i++)
    	arr[i]=b[i];
    	 
    }
};

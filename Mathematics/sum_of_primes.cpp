class Solution{
	public:
   	long long int prime_Sum(int n){
   	    long long int sum = 0;
   	    bool prime[n+1];
   	    memset(prime, true, n+1);
   	    for (int p = 2; p * p <= n; p++)
   	    {
   	        if (prime[p])
   	        {
       	        for (int i = 2 * p; i <= n; i += p)
       	            prime[i] = false;
   	        }
   	    }
   	    for (int i = 2; i <= n; i++)
   	    {
   	        if (prime[i])
   	            sum += i;
   	    }
   	    return sum;
   	}    
};

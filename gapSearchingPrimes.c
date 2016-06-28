#include <stdio.h>

int isPrime(int n)
{
	int i, count = 0;

        for(i = 2; i < n; i++)
	        if(n % i )
		        count += 1;
			    if(count == n - 2)
			                return (n);
			    else
				        return (0) ;

}

int main()
{
	int i,limit,gap;

	printf("Enter the limit value for your search.\n");
	scanf("%d",&limit);
	printf("Enter the gap between the primes searching.\n");
	scanf("%d",&gap);
	
	for(i = 1 ; i <= limit ; i ++)
	{
		if(isPrime(i) && isPrime(i+gap))
			printf("%d\t%d\n",i,i+gap);
	}
	
	return (0);
}

#include<stdio.h>
int main()
{
	int i=10,totaleven=0,totalodd=1;
	
	for(i=1;i<10;i++)
	{
		if(i%2==0)
		{
			totaleven=i+totaleven;
		}
		else
		{
			totalodd=i+totalodd;
		}
	}
	printf("%d\n%d",totaleven,totalodd);
	
	return 0;
}

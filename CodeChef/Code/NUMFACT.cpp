#include<iostream>
#include<cstdio>
#include<cmath>
#define LIMIT 1000000
using namespace std;
#define gc getchar_unlocked
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c < 48 || c > 57); c = gc());
    for(; c > 47 && c < 58; c = gc()) { x = (x << 1) + (x << 3) + c - 48; }
}
int main()
{
	int primes[LIMIT+1],count[LIMIT+1],A[10],t,n,N,i,j,f;
	n=sqrt(LIMIT);
	primes[0]=0;
	primes[1]=1;
	primes[2]=1;
	for(i=3;i<=LIMIT;i++)
	{
		if(i%2 == 0)
			primes[i]=0;
		else
			primes[i]=1;
	}
	for(j=3;j<=n;j=j+2)
	{
		if(primes[j])
			for(i=j*j;i<=LIMIT;i=i+j)
				primes[i]=0;
	}
	//scanf("%d",&t);
	scanint(t);
	while(t--)
	{
		for(i=0;i<=LIMIT;i++)
			count[i]=0;
		f=1;
		//scanf("%d",&N);
		scanint(N);
		for(i=0;i<N;i++)
		{
			//scanf("%d",&A[i]);
			scanint(A[i]);
			if(primes[A[i]])
				count[A[i]]++;
			else
			{
				n=A[i];
				for(j=2;j<=n;j++)
				{	
					if(primes[j])
						while(A[i]%j==0)
						{
							//printf("%d = %d\n",j,count[j]);
							count[j]++;
							A[i]=A[i]/j;
							//printf("%d\t",A[i]);
						}
					if(A[i]==1)
						break;
					if(primes[A[i]])
					{
						count[A[i]]++;
						break;
					}
						
				}
			}
		}
		for(i=0;i<=LIMIT;i++)
		{
			//printf("%d\t",count[i]);
			if(count[i])
				f=f*(count[i]+1);
		}
		printf("%d\n",f);			
	}
	return 0;
} #include<iostream>
#include<cstdio>
#include<cmath>
#define LIMIT 1000000
using namespace std;
#define gc getchar_unlocked
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c < 48 || c > 57); c = gc());
    for(; c > 47 && c < 58; c = gc()) { x = (x << 1) + (x << 3) + c - 48; }
}
int main()
{
	int primes[LIMIT+1],count[LIMIT+1],A[10],t,n,N,i,j,f;
	n=sqrt(LIMIT);
	primes[0]=0;
	primes[1]=1;
	primes[2]=1;
	for(i=3;i<=LIMIT;i++)
	{
		if(i%2 == 0)
			primes[i]=0;
		else
			primes[i]=1;
	}
	for(j=3;j<=n;j=j+2)
	{
		if(primes[j])
			for(i=j*j;i<=LIMIT;i=i+j)
				primes[i]=0;
	}
	//scanf("%d",&t);
	scanint(t);
	while(t--)
	{
		for(i=0;i<=LIMIT;i++)
			count[i]=0;
		f=1;
		//scanf("%d",&N);
		scanint(N);
		for(i=0;i<N;i++)
		{
			//scanf("%d",&A[i]);
			scanint(A[i]);
			if(primes[A[i]])
				count[A[i]]++;
			else
			{
				n=A[i];
				for(j=2;j<=n;j++)
				{	
					if(primes[j])
						while(A[i]%j==0)
						{
							//printf("%d = %d\n",j,count[j]);
							count[j]++;
							A[i]=A[i]/j;
							//printf("%d\t",A[i]);
						}
					if(A[i]==1)
						break;
					if(primes[A[i]])
					{
						count[A[i]]++;
						break;
					}
						
				}
			}
		}
		for(i=0;i<=LIMIT;i++)
		{
			//printf("%d\t",count[i]);
			if(count[i])
				f=f*(count[i]+1);
		}
		printf("%d\n",f);			
	}
	return 0;
} 
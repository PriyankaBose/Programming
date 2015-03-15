#include<stdio.h>
unsigned long long int gcd(unsigned long long int a, unsigned long long int b)
{
	 unsigned long long int  c;
     while ( a != 0 ) 
	  {
      c = a; a = b%a;  b = c;
     }
  return b;
}
int main()
{ 
	unsigned long T, i;
	unsigned long long N, M, totalOdd, total, nEven, nOdd, mEven, mOdd, gcdC;
	scanf("%lu", &T);
	for(i=0; i<T;i++)
	{
	scanf("%llu %llu", &N, &M);
	nEven = N/2;
	mEven = M/2;
	nOdd = nEven + 1;
	mOdd = mEven + 1;
	if(N%2 == 0)
		nOdd = nEven;
	if(M%2 == 0)
		mOdd = mEven;
	totalOdd = nEven * mOdd + mEven * nOdd;
	total = N * M ;
	gcdC = gcd(total, totalOdd);
	printf("%llu/%llu\n", totalOdd/gcdC, total/gcdC);
	}
	return 0;
}
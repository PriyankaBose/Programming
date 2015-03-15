#include <stdio.h>
#include <stdlib.h>
/*
* If p is prime, (a / b) mod p = (a * b^(-1)) mod p
* nCr = (n! / (r!*(n - r)!)) mod p = (n! mod p) * ((r!*(n - r)!)^(-1) (mod p))
* If p is prime, the inverse of any number (x mod p) is ((x ^( p - 2)) mod p) (Euler's Theorem)
* We can calculate nCr = fact(n)*  fact(r)^(p-2)  *  fact(n-r)^(p-2)
*/
long long int fact[1000001],ifact[1000001];

long long int modularInverse(long long int base, int exp)
{
	long long int res=1;
	while(exp>0)
	{
		if(exp%2==1)
			res=(res*base)%MOD;
		base=(base*base)%MOD;
		exp=exp/2;
	}
	return res;
}

void fastNCR()
{
	int i=0;
	fact[0]=ifact[0]=1;
	for(i=1;i<=1000000;i++)
	{
		fact[i]=(i*fact[i-1])%MOD;
		ifact[i]=	(modularInverse(fact[i],MOD-2)) %MOD;
	}
	
}
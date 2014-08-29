#include<stdio.h>
#include<math.h>
#define gc getchar_unlocked
void scanint(int *x)
{
    register int c = gc();
    *x = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {c=gc();}
    for(;c>47 && c<58;c = gc()) {*x = ((*x)<<1) + ((*x)<<3) + c - 48;}
}
 
void scanintll(long long int *x)
{
    register int c = gc();
    *x = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {c=gc();}
    for(;c>47 && c<58;c = gc()) {*x = ((*x)<<1) + ((*x)<<3) + c - 48;}
}
int main()
{
	int t;
	long long x,y,q;
	unsigned long long diff;
	scanint(&t);
	while(t--)
	{
		scanintll(&x);
		scanintll(&y);
		if(x<0)
			x=-x;
		if(y<0)
			y=-y;
		if(x>y)
		{
			diff = x-y;
			q = diff/2;
			if (q * 2 < diff) ++q;
			diff=q;
			//diff = ceil(diff/2.0);
		}	
		else if(y>(x+1))
		{
			diff = y-x;
			diff = diff/2;	
		}
		else
			diff=0;
		
		diff= x+y+(2*diff);
		printf("%llu\n",diff);
	}
	return 0;
}

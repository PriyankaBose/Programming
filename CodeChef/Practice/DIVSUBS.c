#include<stdio.h>
#define gc getchar_unlocked
void scanint(int *x)
{
    register int c = gc();
    *x = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {c=gc();}
    for(;c>47 && c<58;c = gc()) {*x = ((*x)<<1) + ((*x)<<3) + c - 48;}
}
 
void scanintll(unsigned long int *x)
{
    register int c = gc();
    *x = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {c=gc();}
    for(;c>47 && c<58;c = gc()) {*x = ((*x)<<1) + ((*x)<<3) + c - 48;}
}
int main()
{
	unsigned long int  A[100001], B[100001],D[100000],i,j,N,k,t,flag;
	long long c;
	//scanf("%lu",&t);
	scanintll(&t);
	for(i=0;i<t;i++)
	{
		//scanf("%lu",&N);
		scanintll(&N);
		B[0]=0;
		A[0]=-1;
		c=0;
		flag =0;
		for(j=1;j<N;j++)
			D[j]= -1;
		D[0]=0;		
		for(j=1;j<=N;j++)
		{
			//scanf("%lu",&A[j]);
			scanintll(&A[j]);
			c=c+A[j];
			B[j]=c%N;
			if((D[B[j]] != -1) && (flag ==0))
			{
				flag = 1;
				k=j;
			}
			if(flag==0)
				D[B[j]]=j;	
		}
		
		printf("%lu\n",(k - D[B[k]]));
		for(j=D[B[k]]+1;j<=k;j++)
		{
			printf("%lu", j);
			if (j != k) printf(" ");
		}
		puts("");
	}
	return 0;
}
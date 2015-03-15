#include<stdio.h>
int main()
{
	int num,n,i=2,c=0;
	scanf("%d",&n);
	for(num=1;num<=n;num++)
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
				break;
		}
		if(num==i)
		{
			c++;
			printf("%d,",num);
		}
	}
	printf("\n\n%d",c);
	return 0;
}
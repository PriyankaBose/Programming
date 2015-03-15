#include<stdio.h>	
int main()
{
	int count_5,n,i,num,c,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		count_5 = 5;
		sum = 0;
		do
		{	
			c = num / count_5;
			sum = sum + c;
			count_5 = count_5 * 5;
		}while(c);
		printf("%d\n",sum);
	}
	return 0;
}		
 
#include<stdio.h>
int main()
{
	int factn[200]={0},n,i,fact,num,carry,j,k=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&fact);
		factn[0] = 1;
		factn[1] = -1;
		for(j=2;j<=fact;j++)
		{
			k=0;
			num = factn[k];
			carry = 0;
                        while(factn[k] != -1)
			{
				num = num * j + carry;
				factn[k] = num % 10;
				carry = num / 10;				
				num = factn[++k];
			}
			while(carry)
			{
				factn[k] = carry % 10;
				carry = carry / 10;
				k++;
			}
			factn[k] = -1;				
		}
		for(j=k-1;j>=0;j--)
			printf("%d",factn[j]);	
		printf("\n");
	}
	return 0;
}
 
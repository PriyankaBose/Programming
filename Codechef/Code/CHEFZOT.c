#include<stdio.h>
int main()
{
	unsigned long int N, i =0, index = 0, maxLength = 0;
	int A;
	scanf("%lu",&N);
	for(i = 0; i < N ; i++)
	{
		scanf("%d",&A);				
		if(A==0)
			index=0;
		else
		{
			index++;
			if (maxLength<=index)
					maxLength=index;
		}
	}
	printf("%lu", maxLength);
	return 0;
}
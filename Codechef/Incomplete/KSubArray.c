#include<stdio.h>
int main()
{
	int n,k,i,max,a[20];
	printf("Enter the length of the Array:");
	scanf("%d",&n);
	printf("Enter the length of the subarray:");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	max=0;
	for(i=1;i<k;i++)
	{
		if(a[max] < a[i])
			max = i;
	}
	printf("%d\n",a[max]);
	for(i=k;i<n;i++)
	{
		if((i-k+1)> max)
			max=i;
		else if((i-k+1)<=max && a[max] < a[i])
			max=i;
			
		if(a[i-(k-1)] > a[max])
			max = i-(k-2);
		printf("%d\n",a[max]);
	}
	return 0;
}
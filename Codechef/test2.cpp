#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[100000],n,m,i,j,max=0,sum=0,index;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(max<a[j])
			{
				max=a[j];
				index=j;
			}
		}
		//printf("%d\n",max);
		sum=sum+max;
		max=0;
		a[index] = a[index] - 1;
	}
	printf("%d",sum);
	return 0;
}
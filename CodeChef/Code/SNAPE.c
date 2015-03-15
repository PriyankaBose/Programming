#include<stdio.h>
#include<math.h>
int main()
{
	int T;
	float B,LS,minRS,maxRS;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%f",&B);
		scanf("%f",&LS);
		minRS= sqrt(LS*LS - B*B);
		maxRS= sqrt(LS*LS + B*B);
		printf("%f %f\n",minRS,maxRS);
	}
	return 0;
}
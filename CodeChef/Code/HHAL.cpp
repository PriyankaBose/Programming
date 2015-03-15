#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
	int T,i,j,p,l;
	char H[100000];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%s%n",H,&l);
		printf("L === %d\n",l);
		//l=strlen(H);
		l=l-1;
		j=l-1;
		p=1;
		for(i=0;i<=(l/2);i++)
		{
			if(H[i]!=H[j])
			{
				p=2;
				break;
			}
			else 
				j--;
		}
		printf("%d\n",p);
		
	}
	return 0;
}
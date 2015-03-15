#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int t, n,i,j,end =0,start ,flag, dot, l;
	char c, p[95];
	char * s = (char*)malloc(1000001);
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		//for(j=0;j<94;j++)
		//	p[j]=' ';
		char p[95]={[0 ... 93] =' '};
		flag = 0;
		dot = 0;
		scanf("%d",&n);
		for(j =0; j < n;j++)
		{
			scanf(" %c", &c);
			scanf(" %c", &p[c - 33]);
		}
		scanf(" %s", s);
		l = strlen(s);
		end = l - 1;
		for(j = 0; j < l; j++)
		{
			if(p[*(s+j) - 33]!= ' ')
				*(s+j) = p[*(s+j) - 33];
			if(*(s+j)!= '0')
			{
				if(*(s+j)=='.')
					dot = 1;
			 end = j;
			 if(flag == 0)
			 {
				flag =1;
			    start = j;
			 }
			 else
				continue;
			}
		}
		if(flag==0)
			start = end;
		if(dot == 0)
			end = l - 1;
		if(*(s+end)== '.')
		{
			if(start == end)
			{
				*(s+start) = '0';
				*(s+(start + 1)) = '\0';
			}
			else
				*(s+end) = '\0';
		}
		else
			*(s+(end + 1)) = '\0';
		printf("%s\n",s+start);
	}
	return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include<string>
#include <cstdio>
#include<cmath>
#include <cctype>

using namespace std;
char s2[15000000], str[30000][500];
int seg[15000000];

int main()
{
	int K, lb,ub,i,arr[500]={0},count,segment=0,j,c;
	char c,*p;
	i=0;
	scanf("%c", &c);
	while(c!='\n' )//&& c!= '\r')
	{
		if((c>=65 && c<=90)|| (c>=97 &&c<=122) || c ==32)
			s2[i++]=toupper(c);
		scanf("%c", &c);
	}
	scanf("%d %d %d", &K, &lb, &ub);
	
	for(i=0;i<K;i++)
	{
		scanf("%s", str[i]);
		j=0;
		while(str[i][j]!='\0')
		{
		  str[i][j]=toupper(str[i][j]);
		  j++;
		}  
	}
		
	count=0;
	p=strtok(s2," ");
	
	 while (p != NULL)
	  {
			if(count!=0)
				count++;
		for(i=0;i<K;i++)
		{	
			if(strcmp(p,str[i])==0)
			{
				if(count==0)
				{
					count++;
					seg[c++]=i;
				}
				if(arr[i]==0)
				{
					arr[i]=1;
					for(j=0;j<K;j++)
							if(arr[j]!=1)
								break;
					if(j==K)
					{
						if(count>= lb && count <=ub)
						{
								segment++;
								for(j=0;j<K;j++)
									arr[j]=0;
								count=0;
								break;
						}
					}								
				}
				else
				{
					for(j=0;j<K;j++)
						arr[j]=0;
					arr[i]=1;
					count=1;
				}
			}
		}
		 p = strtok (NULL, " ");
	  }
	  printf("%d",segment);
	return 0;
}
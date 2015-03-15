#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;

class Solution 
{
public:
    bool isNumber(const char *s) 
	{
        int decimal=0,i,len,j;
		i=0;
		len=strlen(s);
		while(i<len)
		{
			if(s[i]!=' ')
				break;
			i++;
		}
		if(s[i]=='-'||s[i]=='+')
			i++;
		if(i==len)
			return false;
		j=i;
		while(--len)
		{
			if((s[len]!=' '))
				break;
		}
		if((i==len) && s[i]=='.')
			return false;
			
		while(i<=len)
		{
			//printf("%d\n",s[i]);
			if(s[i]=='e' || s[i]=='.')
			{
				if(s[j]=='e')
					return false;
				if(decimal == 1)
				{
					if(s[i]=='e'&&s[i-1]=='.')
						;
					else if(s[j+1]=='e'&& s[j]=='.')
						return false;
					else 
						return false;
				}
				else if(decimal==0)
					decimal=1;
				if(i==len && s[i]!='.')
					return false;
			}
			else if(s[i]<48 || s[i]>57)
				return false;
			i++;
		}
		return true;
    }
};

int main()
{
	char *s=(char*) malloc(20);
	Solution sol;
	cout<<sol.isNumber(".e10")<<endl;;
	cout<<sol.isNumber("   12.36  ")<<endl;
	cout<<sol.isNumber(".23")<<endl;
	cout<<sol.isNumber("abc")<<endl;
	cout<<sol.isNumber("1 a")<<endl;
	cout<<sol.isNumber("2e10")<<endl;
	return 0;
}
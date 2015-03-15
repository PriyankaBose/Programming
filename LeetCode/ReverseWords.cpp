#include<iostream>
#include<cstring>

using namespace std;

class Solution {
public:
    void reverseWords(string &s) 
	{
        string A;
		int len,fl=0,ind,j,i;
		len=s.length();
		i=0;
		len--;
		while(i<=len)
		{
			if(s[i]!=' ')
				break;
			i++;
		}
		while(len >= i)
		{
			if((s[len]!=' ') && fl==0)
			{
				fl=1;
				ind=len;
			}
			if(s[len]==' ' || (len==i))
			{
				if(fl==1)
				{
					fl=0;
					j=len+1;
					if(len==i)
						j=len;
					for(;j<=ind;j++)
						A=A+s[j];
					if(len!=i)
						A=A+' ';
				}
			}
			len--;
		}
		//cout<<A;
		s=A;
		//cout<<s<<"/";
    }
};

int main()
{
	string s="            I am a girl, I love India                   ";
	Solution *st = new Solution();
	st->reverseWords(s);
	cout<<s;
	
}
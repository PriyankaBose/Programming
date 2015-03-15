#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int l = s.length();
	cout<<s<<endl;
	for(int i = 0;i < l;i++)
	{
		if(s[i]==' ')
		{
		   //s.replace(i,1,"%20",1,2); `
		   s.replace(i,1,"%20");
		   //l=l+1;
		   l=l+2;
		   //i=i+1;
		   i=i+2;
		}

	}
	cout<<s;
	
	return 0;
}
/*
* Design an algorithm and write code to remove the duplicate characters in a string
* without using any additional buffer  NOTE: One or two additional variables are fine,
* an extra copy of the array is not
*/
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
	//sort(s.begin(),s.end());
	for(int i = 0;i < l ; i++)
	{
		for(int j = i+1;j<l;j++)
		{
			if(s[i]==s[j])
			{
			  s.erase(s.begin()+j);
			  l--;
			  j--;
			}
		}
	}
	cout<<s;
	
	return 0;
}
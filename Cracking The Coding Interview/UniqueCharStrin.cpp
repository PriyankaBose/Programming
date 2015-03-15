#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	string s ="hello";
	int l = s.length();
	sort(s.begin(),s.end());
	
	cout<<s;
	
	return 0;
}
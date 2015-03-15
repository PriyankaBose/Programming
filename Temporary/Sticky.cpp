#include<iostream>
#include<cmath>

#define MIN(a, b) ((a < b) ? a : b)
#define MAX(a, b) ((a > b) ? a : b) 

using namespace std;

int main()
{
	int l1,u1,l2,u2,l3,u3,minL,maxL,lenMin,lenMax;
	cin>>l1;
	cin.ignore();
	cin>>u1;
	cin>>l2;
	cin.ignore();
	cin>>u2;
	cin>>l3;
	cin.ignore();
	cin>>u3;
	
	if(u2<l3)
	{
		minL = l3 - u2;
		maxL = u3 - l2;
	}
	else if(u3 < l2)
	{
		minL = l2 - u3;
		maxL = u2 - l3;
	}
	else
	{
		minL = 0;
		maxL =  MAX(u3 - l2,u2 -l3);
	}
	
	lenMin = l1*l1 + minL*minL;
	lenMax = u1*u1 + maxL*maxL;
	lenMin = sqrt(lenMin);
	lenMax = sqrt(lenMax);
	cout<<lenMin<<","<<lenMax;
	return 0;
}
#include<iostream>
using namespace std;

#define MAX(a,b) a>b ? a:b

int main()
{
	int array[10],maxSofar, max,i,length;
	cin>>length;
	
	for(i=0;i<length;i++)
		cin>>array[i];
		
	maxSofar = max = array[0];
	for( i=1;i < length; i++)
	{
		maxSofar = maxSofar + array[i];
		maxSofar = MAX(array[i] , maxSofar);
		max = MAX(max, maxSofar);
	}
	
	cout<<max;
	return 0;
}
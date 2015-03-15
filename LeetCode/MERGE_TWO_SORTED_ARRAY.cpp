#include<iostream>
using namespace std;

class Solution {
public:
    void merge(int A[], int m, int B[], int n) 
	{
		int i,j,k;
		i=m-1;
       while(i>=0)
	   {
			A[i+n]=A[i];
			//A[i]=0;
			i--;
	   }
	   i=n;
	   j=0;
	   k=0;
	   while(i<(m+n) && j<n)
	   {
			if(A[i]<B[j])
			{
				A[k++]=A[i];
				i++;
			}
			else if(B[j]<=A[i])
			{
				A[k++]=B[j];
				j++;
			}
	   }
	   if(i==m+n)
	   {
			while(j<n)
			{
				A[k++]=B[j];
				j++;
			}
	   }
	   if(j==n)
	   {
			while(i<m+n)
			{
				A[k++]=A[i];
				i++;
			}
	   }
	   //for(i=0;i<m+n;i++)
		//cout<<A[i]<<"	";
	}
	
};
int main()
{
	int A[10]={1};
	int B[]={};
	Solution sol;
	sol.merge(A,1,B,0);
	return 0;
}
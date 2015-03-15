#include<iostream>
using namespace std;
class Solution {
public:
    int singleNumber(int A[], int n) 
	{
        int i,res=A[0];
		for(i=1;i<n;i++)
			res=res^A[i];
			
		return res;
    }
};
int main()
{
	int A
	return 0;
}
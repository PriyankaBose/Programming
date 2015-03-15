/*Question 1: You are given a phone keypad like following diagram, where each character corresponds to a digit mentioned in the same box.


You are given n strings and you have to find their decimal representation. You have to print the string and corresponding decimal representation in descending order.
Like if you are given “amazon” then its corresponding decimal notation will be 262966.
If more than one strings have same decimal notation then you have to print them in the order in which input is given.
(Given that given string consists of lower case alphabets only.)

Test Case 1:
5
Amazon
Microsoft
Facebook
Aa
Bb

Output:
642767638  microsoft
32232665  facebook
262966  amazon
22 aa
22 bb
http://www.geeksforgeeks.org/amazon-interview-set-119-campus-internship/
*/


#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string.h>
using namespace std;
int  no[26]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
int converttono(string str)
{
    int result=0;
    int i;
    for(i=0;i<str.size();i++)
    {
        result=result*10+no[str[i]-'a'];
    }
    return result;
}

int compare(string a,string b)
{
    if(converttono(a)<converttono(b))
        return 1;
    else if(converttono(a)>converttono(b))
        return 0;
    else if(converttono(a)==converttono(b))
    {
        if(a>b)
            return 1;
        else return 0;
    }
}
int main()
{
    string str[100];
    int no;
    cin>>no;
    int i;
    for(i=0;i<no;i++)
    {
       cin>>str[i];
    }
    sort(str,str+no,compare);
    reverse(str,str+no);
    for(i=0;i<no;i++)
    {
     cout<<converttono(str[i])<<"  "<<str[i]<<endl;
    }
}

#include<stdio.h>

 void main()
{
char languages[6][20]={"Visual Basic","Java","Fortran","C","C","C++"};
int i;
char *t;
t=languages[3];
languages[3]=languages[4];
languages[4]=t;
for(i=0;i<=4;i++)
printf("%s\n",languages[i]);
}
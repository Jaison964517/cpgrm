#include<stdio.h>
int main()
{
int i,n,x=1;
printf("\nEnter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
x=x*i;
printf("\nFactorial=%d",x);
return 0;
}

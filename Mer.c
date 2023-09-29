#include<stdio.h>
int main()
{
int i,j,n1,n2,a[10],b[10],c[20],temp=0;
printf("\nEnter the limit for 1st array");
scanf("\n%d",&n1);
printf("\nEnter the elements for 1st array");
for(i=0;i<n1;i++)
scanf("%d",&a[i]);

printf("\nEnter the limit for 2st array");
scanf("\n%d",&n2);
printf("\nEnter the elements for 2st array");
for(i=0;i<n2;i++)
scanf("%d",&b[i]);


for(i=0;i<n1;i++)
c[i]=a[i];
for(i=0;i<n2;i++)
c[i+n1]=b[i];

for(i=0;i<n1+n2;i++)
for(j=i+1;j<n1+n2;j++)
if(c[i]>c[j])
{
temp=c[i];
c[i]=c[j];
c[j]=temp;
}

for(i=0;i<n1+n2;i++)
printf("\t%d",c[i]);
return 0;
}

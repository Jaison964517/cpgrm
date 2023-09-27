#include<stdio.h>
int main()
{
int i,n,ch,a[20],el,x=0;

printf("\nEnter the limit for array (one time only )");
scanf("\n%d",&n);
do{
printf("\nEnter the choice\n1. Insert \n2.delete \n3.Display \n4.Exit");
scanf("\t%d",&ch);
switch(ch)
{
case 1:printf("\nEnter the no:of elements for insertion");
       scanf("\t%d",&el);
       printf("\nEnter the %d elements",el);
       for(i=x;i<el;i++)
       {
       scanf("%d",&a[i]);
       x++;
       }
       break;
case 2:printf("\nEnter the element for deletion");
       scanf("\t%d",&el);
       for(i=0;i<=x;i++)
       {
       if(a[i]!=el)
       printf("\nElement not found");
       else
       a[i]=0;
       }
       break;
case 3:printf("\nDisplaying\n");
       for(i=0;i<x;i++)
       printf("\t%d",a[i]);
       break;
default:printf("\nWrong choice");
}
}while(ch!=4);
printf("\nExiting");
return 0;
}

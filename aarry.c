#include<stdio.h>
void binary(int *n,int a[]);
void linear(int *n,int a[]);
int main()
{
    int n,a[50],i,ch;
    printf("\nEnter the no: of elements= ");
    scanf("\n%d",&n);
    printf("\nEnter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    do
    {
        printf("\n1. Linear Search \t 2. Binary Search \t 3. Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:linear(&n,a);
                  break;
            case 2:binary(&n,a);
                  break;
            case 3:printf("\nExiting");
                  break;
            default:printf("\nWrong choice");
        }
    }while(ch!=3);
return 0;
}
 void linear(int *n,int a[])
 {
     int item,i,r=0;
     printf("\nEnter the item for searching");
     scanf("%d",&item);
     for(i=0;i<*n;i++)
     {
         if(item==a[i])
         {
         printf("\nElement found at position %d ",i+1);
         r=1;
         }
     }
     if(r!=1)
     printf("\nElement not found");
 }
 void binary(int *n,int a[])
 {
     int i,j,temp,item,beg=0,end=*n-1,mid,fo=0;
     printf("\nEnter the item for searching");
     scanf("%d",&item);  //Sorting for binary searching
     for(i=0;i<*n;i++)
     for(j=i+1;j<*n;j++)
     if(a[i]>a[j])
     {
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
     }
     while(beg<=end)
     {
        mid=(beg+end)/2;
        if(item==a[mid])
         {
             printf("\nElement found at position %d ",mid);
             fo=1;
             break;
         }
        else if(item<mid)
        end=mid-1;
        else
        beg=mid+1;
     }
     if(fo!=1)
     printf("\nElement not found\n");
 }

 #include<stdio.h>
void main()
{
int a[25],beg,item,last,n,num,i,ch,mid,f=0;

printf("menu\n");
printf("\n 1.linear search");
printf("\n 2.binary search");
printf("\n enter the choice");
scanf("%d",&ch);
if(ch==1)
{
printf("\n enter the number of elements in the array");
scanf("%d",&n);
printf("\n enter the array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n enter the item to be searched");
scanf("%d",&item);
for(i=0;i<n;i++)
{
if(a[i]==item)
{
printf("\n item found at position%d",i+1);
break;
}
}
if(i==n)
printf("\n item not found");
}
if(ch==2)
{
printf("\enenter the number of elements in the array");
scanf("%d",&n);
printf("enter the sorted array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("item to be searched");
scanf("%d",&item);
last=n-1;
mid=(beg+last)/2;
while(beg<=last)
{
if(item==a[mid])
{
printf("\n item found at position %d",mid+1);
break;
}
else if(a[mid]>item)
last=mid-1;
else beg=mid+1;
mid=(beg+last)/2;
}
}
}


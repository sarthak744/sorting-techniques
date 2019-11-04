#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],i,j,k,l,temp,count=0;
clrscr();
printf("enter the array\n");
for(i=1;i<=5;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=5;i++)
{
b[i]=a[i];
count++;
if(i>1)
{
for(j=1;j<=count-1;j++)
{
l=count;
while(l>1)
{
if(b[l-1]>b[l])
{
temp=b[l-1];
b[l-1]=b[l];
b[l]=temp;
}
l--;
}
}
}
}
printf("sorted array\n");
for(i=1;i<=5;i++)
{
printf("%d\n",b[i]);
}
getch();
}
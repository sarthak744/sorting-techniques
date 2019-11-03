#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a[100],i,j,k,l,temp,m,n;
clrscr();
printf("enter the array\n");
for(i=1;i<=10;i++)
{
scanf("%d",&a[i]);
}
for(j=1;j<=3;j++)
{
for(i=1;i<=10;i++)
{
if(j==1)
{
for(l=1;l<=9;l++)
{
if(a[l]%10>a[l+1]%10)
{
temp=a[l];
a[l]=a[l+1];
a[l+1]=temp;
}
}
}
else if(j==2)
{
for(l=1;l<=9;l++)
{
if((a[l]%100-a[l]%10)>(a[l+1]%100-a[l+1]%10))
{
temp=a[l];
a[l]=a[l+1];
a[l+1]=temp;
}
}
}
else if(j==3)
{
for(l=1;l<=9;l++)
{
if((a[l]%1000-a[l]%100)>(a[l+1]%1000-a[l+1]%100))
{
temp=a[l];
a[l]=a[l+1];
a[l+1]=temp;
}
}
}
}
}
printf("sorted array\n");
for(i=1;i<=10;i++)
{
printf("%d\n",a[i]);
}
getch();
}
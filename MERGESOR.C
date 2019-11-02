#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],count = 0,count1 = 0,i,j,k,l,m,min,count2=0,count3=0;
int temp,item;
clrscr();
printf("enter the array\n");
for(i=1;i<=10;i++)
{
scanf("%d",&a[i]);
}
for(j=1;j<=4;j++)
{
for(i=1;i<=10-count3;i++)
{
count++;
if(j==1)
{
if(count==2)
{
if(a[i-1]>a[i])
{
temp=a[i-1];
a[i-1]=a[i];
a[i]=temp;
}
count=0;
}
}
else if(j==2)
{
count1++;
if(count1==4)
{
for(k=1;k<=3;k++)
{
l=i;
while(l>=i-3)
{
if(a[l-1]>a[l])
{
temp=a[l-1];
a[l-1]=a[l];
a[l]=temp;
}
l--;
}
}
count1=0;
}
}
else if(j==3)
{
count2++;
if(count2==8)
{
for(k=1;k<=7;k++)
{
l=i;
while(l>=i-7)
{
if(a[l-1]>a[l])
{
temp=a[l-1];
a[l-1]=a[l];
a[l]=temp;
}
l--;
}
}
count2=0;
count3++;
}
}
else if(j==4)
{
for(l=1;l<=9;l++)
{
if(a[l]>a[l+1])
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



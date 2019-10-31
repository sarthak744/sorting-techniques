#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],max,i,j,temp,k,l,count=0,item;
clrscr();
printf("Enter the array\n");
for(i=1;i<=5;i++)
{
scanf("%d",&a[i]);
}
for(k=1;k<=5;k++)
{
max=a[1];
for(j=1;j<=5-count;j++)
{
if(a[j]>max||a[j]==max)
{
max=a[j];
temp=j;
}
}
b[k]=max;
for(i=1;i<=5-count;i++)
{
if(a[i]==max)
{
item=a[i];
}
else if(i>temp)
{
a[i-1]=a[i];
}
}
count++;
}
printf("max heap\n");
for(l=1;l<=5;l++)
{
printf("%d\n",b[l]);
}

getch();
}

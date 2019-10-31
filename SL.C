#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],min,i,j,temp,k,l,count=0,item;
clrscr();
printf("Enter the array\n");
for(i=1;i<=5;i++)
{
scanf("%d",&a[i]);
}
for(k=1;k<=5;k++)
{
min=a[1];
for(j=1;j<=5-count;j++)
{
if(a[j]<min||a[j]==min)
{
min=a[j];
temp=j;
}
}
b[k]=min;
for(i=1;i<=5-count;i++)
{
if(a[i]==min)
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
printf("sorted array\n");
for(l=1;l<=5;l++)
{
printf("%d\n",b[l]);
}

getch();
}

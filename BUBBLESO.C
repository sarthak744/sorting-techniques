#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,temp,j;
clrscr();
printf("enter the array\n");
for(i=1;i<=10;i++)
{
scanf("%d",&a[i]);
}
for(j=1;j<=9;j++)
{
for(i=1;i<=10;i++)
{
if(a[i]>a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
}
printf("sorted array\n");
for(j=1;j<=10;j++)
{
printf("%d\n",a[j]);
}
getch();
}
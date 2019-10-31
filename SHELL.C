#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],gap,size,i,j,k,l,temp;
clrscr();
size =8;
gap=size/2;
for(i=1;i<=8;i++)
{
scanf("%d",&a[i]);
}
while(gap>0)
{
for(i=1;i<=size-gap;i++)
{
if(a[i]>a[i+gap])
{
temp=a[i];
a[i]=a[i+gap];
a[i+gap]=temp;
}
}
gap=gap/2;
}
for(i=1;i<=8;i++)
{
printf("%d\n",a[i]);
}
getch();
}

#include<stdio.h>
int smallest(int *a,int n)
{
int i,small;
for(i=0;i<n;i++)
{
if(a[i]==0)
continue;
else
{
small=a[i];
break;
}
}
for(i=0;i<n;i++)
{
if(a[i]<small&&a[i]!=0)
small=a[i];
}
return small;
}
int main()
{int n,i,a[10],count1=0,count=0,z,j,k,flag=0;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{count1=0;count=0;
z=smallest(a,n);
//printf("%d:",z);
for(k=0;k<n;k++)
{ if(a[k]!=0)
{
a[k]=a[k]-z;
count++;
}
else
count1++;
}
//printf("%d\n",count);
if(count1==n)
break;
printf("%d\n",count);
}
}














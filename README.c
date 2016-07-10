# pair
#include<stdio.h>
void main()
{
int a,b,c,e=1;
printf("enter the n values:");
scanf("%d",&a);
printf("enter the no of pair:");
scanf("%d",&c);
for(int d=0;d<2*c;d++)
{
b=2*a-d;
if(c!=b)
{
printf("the pair is %d",c,e++,c);
}
}
}

# pair
#include<stdio.h>
void main()
{
int a,b,c,e=1;
printf("Enter the n values:");
scanf("%d",&a);
printf("Enter the pair:");
scanf("%d",&c);
for(int d=0;d<2*c;d++)
{
b=2*a-d;
if(c!=b)
{
printf("The pair is %d\n",c,e++,c);
}
}
}

#include<stdio.h>
void main()
{
int size,a[10];
int i,j,sorted;
printf("\n enter the size of array");
scanf("%d",&size);
printf("\n enter %d elements ",size);
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("array before sorting");
for(i=0;i<size;i++)
{
printf(" %d",a[i]);
}

for(i=1;i<size;i++)
{
sorted =a[i];
for(j=i-1;j>=0&&a[j]>sorted;j--)
{
a[j+1]=a[j];
a[j+1]=sorted;
printf(" %d ",a[i]);
}
}
}
/* output
cse@cse-OptiPlex-390:~/SY70$ ./a.out

 enter the size of array 5

 enter 5 elements  1
8
5
7
4
array before sorting 1 8 5 7 4
cse@cse-OptiPlex-390:~/SY70$ 
*/

#include <stdio.h>
void main()
{
int n,i,j,a[100],swap;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements: \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++){
for(j=0;j<n-i-1;j++)
{
    if(a[j]>a[j+1])
    {
    swap=a[j];
    a[j]=a[j+1];
    a[j+1]=swap;
    }
}
}
printf("\nNo is in acending order");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
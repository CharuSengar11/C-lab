#include <stdio.h>
#define size 100
void main(){
	int a[size],i=0,n;
	printf("enter the number of elements:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
	printf("enter the elements of array:");
	scanf("%d",&a[i]);
}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

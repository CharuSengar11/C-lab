#include <stdio.h>
#define size 100
int main(){
	int a[size], i=0, n,sum=0;
	printf("enter the number elements:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("enter the elements of array:");
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
	sum+=a[i];
}
	printf("%d ",sum);
	
return 0;

	
	
}

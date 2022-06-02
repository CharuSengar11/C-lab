#include<stdio.h>
int main()
{
	int n,i,*p,*q;
	scanf("%d",&n);
	int arr[n];
	p=&arr[0];
	q=&arr[n-1];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(;q>=p;q--)
	{
		printf("%d ",*q);
		printf("\n%p ",q);
		
	}
	for(;q>=p;q--)
	{
	
	printf("%p ",q);
    }
	return 0;
}

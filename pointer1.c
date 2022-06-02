#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int *p;
	
	*p=&a;
	
	printf("%p\n",p);
	printf("%p",p+1);
}

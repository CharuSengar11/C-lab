#include <stdio.h>
int main(){
	int i, n, p=1 ,t;
	printf("enter the digit:");
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{i=t%10;
	p=p*i;
	t=t/10;
	}
	printf("product is %d",p);
	return 0;
}

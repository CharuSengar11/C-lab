#include <stdio.h>
#define size 100
int main(){
	int a[size], i=0, n, max, min;
	printf("enter the number elements:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("enter the elements of array:");
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for (i=0;i<n;i++){
		if (a[i]>max)
		max=a[i];
}
    for (i=0;i<n;i++)
     {
	 if(a[i]<min)
     min=a[i];
}
printf("%d max\n",max);
printf("%d min",min);
return 0;

	
	
}

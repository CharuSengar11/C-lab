#include<stdio.h>
#include <string.h>
main(){
	char a[20];
	int i, length=0;
	printf("enter the string:\n");
	scanf("%s", a);
	for (i=0; a[i]; i++)
	{
		length++;
	}
	printf("length of the string is : %d ", length);
	return 0;
}


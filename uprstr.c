#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	scanf("%[^\n]",a);
	strupr(a);
	printf("uppercase string : %s",a);
	return 0;
}

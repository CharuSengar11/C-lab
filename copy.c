#include <stdio.h>
#include <string.h>
 int main(){
	char a[100], b[100], i;
	printf("enter the string:");
	scanf("%[^\n]", a);
	printf("%s", a);
    for (i=0; a[i];i++)
	{
	b[i]=a[i];
}
 b[i]='\0';
	printf("%s \n", a);
	printf("%s", b);
	return 0;
	
}

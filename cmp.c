#include <string.h>
#include <stdio.h>
int main(){
	char a[100], b[100];
	int i=0, res;
	printf("enter the string1:");
	scanf("%s", a);
	printf("enter the string2:");
	scanf("%s", b);
	res=strcmp(b,a);
	if (res==0)
	printf("strings are equal");
	else if (res>=1)
	printf("string1 is greater.\n");
	else if (res<1);
	printf("string2 is greater\n");
	return 0;
	

}

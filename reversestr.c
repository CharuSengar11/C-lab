#include <stdio.h>
#include <string.h>
main(){
	char str[10], reverse;
	printf("enter the string:\n");
	scanf("%s",&str);
	reverse=strrev(str);
	printf("reverse string is : %c \n", reverse);
}

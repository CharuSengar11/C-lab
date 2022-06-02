#include <stdio.h>
#include <string.h>
 int main(){
 	char a[100];
 	int i=0, c=0;
 	printf("enter the string:");
 	scanf("[^\]", a);
 	for (i=0; a[i]; i++)
 	{
 	if (a[i]>=65 && a[i]<=90)
 	c++;
 }
 printf("%d", c);
 return 0;
}

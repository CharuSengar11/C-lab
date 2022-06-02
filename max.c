#include<stdio.h>
int main(){
	int a, b;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	switch(a>b){
	case 1:
		printf("a is maximum");
	        break;
	case 0:
	switch(b>a){
	case 1:
		printf("b is maximum");
		break;
	
    default:
	printf("both are equal");
}
}
}

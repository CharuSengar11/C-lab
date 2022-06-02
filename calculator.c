#include<stdio.h>
int main(){
	char op;
	int a, b;
	printf("enter the operator(+,_,*,/):");
	scanf("%d",&op);
	printf("enter the operand:");
	scanf("%d %d",&a,&b);
	switch(op){
	case '+':
		printf("%d+%d=%d",a,b,a+b);
	    break;
	case '-':
		printf("%d-%d=%d",a,b,a-b);
	    break;
	case '*':
		printf("%d*%d=%d",a,b,a*b);
		break;
	case '/':
		printf("%d/%d=%d",a,b,a/b);
		break;
	default:
		printf("the operator is invalid:");
			}
}

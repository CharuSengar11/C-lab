#include<stdio.h>
int main(){
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	switch(a>0){
	case 1:
	printf("number is positive");
	     break;
	case 0:
	switch(a<0){
    case 1:
	printf("number is negative");
	      break;
	case 0:
		printf("number is zero");
		break;
}
}
}

#include<stdio.h>
int main(){
	int month;
	printf("enter the month number:");
	scanf("%d",&month);
	switch(month){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
    printf("number of days are 31.");
	    break;
	case 4:
	case 6:
	case 9:
	case 10:
	case 11:
	case 12:
	printf("number of days are 30.");
	    break;
	default :
	printf("enter month is: february");
}
}

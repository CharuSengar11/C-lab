#include<stdio.h>
int main(){
	char c;
	printf("enter the charecter:");
	scanf("%c",&c);
	switch(c){
	case 'b':
	case 'c':
	case 'd':
	case 'f':
	case 'g':
	case 'h':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':
	printf("entered alphabet is consonant");
	        break;
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("enter alphabet is vowel");
            break;
    default:
	printf("entered value is invalid.");
	
    
            
	
	
	}
}

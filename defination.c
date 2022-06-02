#include<stdio.h>
void sum()
{
    int a,b,sum=0;
    printf("enter the numbers:");
    scanf("%d %d" , &a,&b);
    sum = a+b;
    printf("sum = %d " , sum);
}
void main()
{
    sum();
    printf("\ngoood akshata\n");
    sum();
}


/*void is_prime()
{
    int a,p=0,i;
    printf("enter the number: ");
    scanf("%d" , &a);
    for(i=2;i<a;i++)
    {
        if (a%i==0)
        p = 1;
        break;
    }
    if(p==0)
    printf("The number is a prime number");
    else
    printf("The number is not a prime number");
}
void main()
{
    is_prime();
}*/



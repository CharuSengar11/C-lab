#include<stdio.h>
void sum();                     //declaration
void main()//without declation it will give error in any other datatype other than integer
{
    sum();                      //calling
}
void sum()                      //defining
{
    int a,b,sum=0;
    printf("enter the numbers:");
    scanf("%d %d" , &a,&b);
    sum = a+b;
    printf("sum = %d " , sum);
}
#include<stdio.h>
#include<stdlib.h>
// int add(int n1,int n2);
int add(int,int);
int sub(int,int);
int mul(int,int);
int divide(int,int);
int main()
{
    char choice;
    int num,num2,result=0;
    printf("enter the operation :\n");
    scanf("%c",&choice);
    printf("enter 2 input :\n");
    scanf("%d%d",&num,&num2);
    
    switch(choice)
    {
        case '+':result=add(num,num2);
                break;
        case '-':result=sub(num,num2);
                break;
        case '*':result=mul(num,num2);
                break;
        case '/':result=divide(num,num2);
                break;
        default:printf("invalid operation !\n");
                exit(0);
    }
    printf("the result is %d \n",result);
    return 0;
}
int add(int n1,int n2)
{
    return n1+n2;
}
int mul(int num,int num2)
{
        return num*num2;
}
int divide(int num,int num2)
{
     return num/num2;
}
int sub(int num,int num2)
{
    return num-num2;
}
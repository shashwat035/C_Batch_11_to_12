#include<stdio.h>
int powerFxn(int,int);
int main()
{
    int num,power;
    printf("enter the number and power\n");
    scanf("%d%d",&num,&power);//5 3
    int result=powerFxn(num,power);
    printf("the result is %d \n",result);
    return 0;
}
int powerFxn(int num,int power)
{
    int result=1;
    for(int i=0;i<power;i++) 
    {
        result=result*num; 
    }
    return result;
}

























// #include<stdio.h>
// int main()
// {

//     for(int j=1;j<=2;j++)
//     {
//         int num,pow,result=1;
//         printf("enter number and power \n");
//         scanf("%d%d",&num,&pow);//4 3
//         for (int i = 1; i <= pow; i++)// 4*4*4
//         {
//             result=result*num;
//         }
//         // printf(" %d  ^ %d = %d \n",num,pow,result);
//     }
    
//     return 0;
// }

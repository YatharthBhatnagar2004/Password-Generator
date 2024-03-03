#include <stdio.h>
int main()
{
    int a, b;
    char operation;
    printf("Enter the integer --> ");
    scanf("%d %d %c",&a,&b,&operation);
    switch (operation)
    {
    case '*':
        printf("product is %d",(a*b));
        break;
    case '-':
        printf("difference is %d",(a-b));
        break;
    case '+':
        printf("sum is %d",(a+b));
        break;
    case '/':
        printf("quotient is %d",(a/b));
        break;

    default:
        printf("Enter a valid operation");
        break;
    }
    // while( 1){
    //     printf("Infinite for loop ");
    // }
    int sum = 0;
    // printf("The table of %d is\n", a);

    // while (i <= 10)
    // {
    //     printf("%d * %d = %d \n", a, i, (a * i));
    //     // printf(" * %d",i);
    //     // printf(" = %d\n",(a*i));
    //     i++;
    // }
    // do
    // {
    //     sum+=a;
    //     a--;
    // } while (a>0);
    // printf("The sum is %d",sum);
    
}
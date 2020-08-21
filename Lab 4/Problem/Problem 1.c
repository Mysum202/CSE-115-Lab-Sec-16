#include <stdio.h>

int main()
{
    int x,y,result=0; char op;
    printf("Enter an operator: ");
    scanf("%c", &op);
    printf("Enter 1st operand: ");
    scanf("%d", &x);
    printf("Enter 2nd operand: ");
    scanf("%d", &y);

    switch(op){
        case '+':
        result=x+y;
        break;
        case '-':
        result=x-y;
        break;
        case '*':
        result=x*y;
        break;
        default:
        result=x/y;
        break;

    }
    printf("The result is: %d", result);

    return 0;
}

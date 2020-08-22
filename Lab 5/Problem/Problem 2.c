#include<stdio.h>
int main()
{
    int a,i,f = 1;

    printf("Enter a number: ");
    scanf("%d",&a);

    if(a >= 0){
        for(i = 1;i<=a;i=i+1){
           f = i*f;
        }
        printf("Factorial of %d is %d\n",a,f);
    }
    else{
        printf("Error! Factorial of a negative number doesn't exist.\n");
    }
    return 0;
}

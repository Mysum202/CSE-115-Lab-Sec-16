#include<stdio.h>
int main()
{
    int i;

    for(i = 0;i<=100;i=i+1){
        if(i%2 == 0){
            printf("%d\n",i);
        }
    }
    return 0;
}

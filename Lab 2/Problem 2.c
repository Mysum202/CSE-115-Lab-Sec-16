#include<stdio.h>
#include<math.h>
int main()
{
    int b,h;
    float H,A;
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter hypotenuse: ");
    scanf("%d",&h);
    H = sqrt(pow(h,2) - pow(b,2));
    A = (H*b)/2;
    printf("Height is %0.2f\nArea is %0.2f\n",H,A);
    return 0;
}

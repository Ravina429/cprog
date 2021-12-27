#include<stdio.h>

int pfactor(int n1, int n2);

void main()
{

    int base, power;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("\n\nEnter Power factor: ");
    scanf("%d", &power);
    printf("\n\%d%d = %d", base, power, pfactor(base, power));

}

int pfactor(int b, int e)
{
    if(e == 0)
        return 1;

    return (b*pfactor(b, e-1));
}


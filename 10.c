#include <stdio.h>

int main()
{

    int a1,a2,b1,b2;
    float p1,p2,total;
    scanf("%d%d%f",&a1,&b1,&p1);
    scanf("%d%d%f",&a2,&b2,&p2);
    total = (b1*p1)+(b2*p2);
    printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;
}
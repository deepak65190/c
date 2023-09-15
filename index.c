#include <stdio.h>
int main()
{
    float a;
    printf("Enter electricity units:");
    scanf("%f",&a);
    if(a <= 50)
        printf("Electricity Bill = Rs. %.2f",a * 0.5 );
    else if(50 < a && a <= 150)
        printf("Electricity Bill = Rs. %.2f",a * 0.75 );
    else if(150 < a && a <= 250)
        printf("Electricity Bill = Rs. %.2f",a * 1.2 );
    else
        printf("Electricity Bill = Rs. %.2f",a * 1.5 );
    return 0;
}
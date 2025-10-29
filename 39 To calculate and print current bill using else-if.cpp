#include <stdio.h>
int main() 
{
    int units;
    float amount,charges,total_amount;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if (units <= 50) 
    {
        amount = units * 2.50;
        charges=25;
    } 
    else if (units <= 100) 
    {
        amount = units * 3.00;
        charges=50;
    } 
    else if (units <= 200) 
    {
        amount = units * 3.50;
        charges=75;
    } 
    else if (units <= 300) 
    {
        amount = units * 4.00;
        charges=100;
    } 
    else
    {
        amount = units * 5.00;
        charges=125;
    }
    total_amount=amount+charges;
    printf("%f\n",total_amount);
    return 0;
    
   
}


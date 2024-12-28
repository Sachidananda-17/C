#include <stdio.h>
int main()
{
    int unit,meter_no;
    float amt, total_amt, sur_charge;
    char s[20];
    printf("enter the name of the meter holder\n");
    gets(s);
    printf("enter the meter no\n");
    scanf("%d",&meter_no);
    printf("Enter total units consumed: ");
    scanf("%d", &unit);
    if(unit <= 50)
    {
        amt = unit * 0.50;
    }
    else if(unit <= 150)
    {
        amt = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        amt = 100 + ((unit-150) * 1.20);
    }
    else
    {
        amt = 220 + ((unit-250) * 1.50);
    }
    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;
    printf("surcharge=Rs.%.2f\n",sur_charge);
    printf("Electricity Bill = Rs. %.2f", total_amt);
    return 0;
}

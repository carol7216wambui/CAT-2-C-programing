#include <stdio.h>

int main () {

    float hours_worked, hourly_wages, gross_pay, net_pay, tax_rate;

 

   printf("enter hours_worked in a week:");

   scanf("%f", &hours_worked);

   

 printf("enter hourly_wages:");

   scanf("%f", &hourly_wages);

   

    if (hours_worked <= 40) {

        gross_pay = hourly_wages * hours_worked;

    } else {

        float normal_hours = 40;

        float overtime_hours = hours_worked - normal_hours;

        float overtime_rate = hourly_wages * 1.5;

        gross_pay = (hourly_wages * normal_hours) + (overtime_rate * overtime_hours);

    }



   

    if (gross_pay <= 600) {

       tax_rate = 0.15 * gross_pay;

    } else {

       tax_rate = 0.15 * 600;  

        tax_rate += 0.20 * (gross_pay - 600); 

    }



    net_pay = gross_pay - tax_rate;





    printf("Gross Pay: $%.2f\n", gross_pay);

    printf("Taxes : $%.2f\n", tax_rate);

    printf("Net Pay: $%.2f\n", net_pay);



    return 0;

}


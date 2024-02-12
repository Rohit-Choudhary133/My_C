//Determine the amount of weekly pay where
// PAYRATE=12.00, TAXRATE_300 = 15%, TAXERATE_150 = 20%, TAXRATE_REST = 25%, OVERTIME = 40
#include<stdio.h>
int main(){
    int hours = 0;
    double grossPay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;
    double PAYRATE = 12.00;
    double TAXRATE_300 = 0.15;
    double TAXRATE_150 = 0.20;
    double TAXRATE_REST = 0.25;

    printf("Please enter number of hours worked this week: ");
    scanf("%d",&hours);

    // calculate the gross pay
   if (hours <= 40)
       grossPay = hours * PAYRATE;
   else
   {
     grossPay = 40 * PAYRATE;
     double overTimePay = (hours - 40) * (PAYRATE * 1.5);
     grossPay += overTimePay;
   }


   // calculate taxes
   if (grossPay <= 300)
   {
       taxes = grossPay * TAXRATE_300;
   }
   else if(grossPay > 300 && grossPay <= 450)
   {
       taxes = 300 * TAXRATE_300;
       taxes += (grossPay - 300) * TAXRATE_150;
   }
   else if (grossPay > 450)
   {
       taxes = 300 * TAXRATE_300;
       taxes += 150 * TAXRATE_150;
       taxes += (grossPay - 450) * TAXRATE_REST;
   }

   // calculate the netpay
   netPay = grossPay - taxes;

   // display output
   printf("Your gross pay this week is: %.2f\n", grossPay);
   printf("Your taxes this week is: %.2f\n", taxes);
   printf("Your net pay this week is: %.2f\n", netPay);
   
   return 0;
}
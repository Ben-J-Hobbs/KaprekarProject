/*
* Author: Ben Hobbs, NUID 41631956
* Date: 09/07/2018
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main() {

double initialInvestment;
double endInvestment;
double years;
double weeks;
double days;
double decimalYears;
double rateOfReturn;


    printf("Please enter the inital value of your investment: \n");
    scanf("%lf" , &initialInvestment);

    printf("Please enter the final value of your investment: \n");
    scanf("%lf" , &endInvestment);

    printf("Please enter the number of years: \n");
    scanf("%lf" , &years);

    printf("Please enter the number of weeks: \n");
    scanf("%lf", &weeks);

    printf("Please enter the number of days: \n");
    scanf("%lf", &days);

    decimalYears = years + (weeks / 52) + (days / 365);
    rateOfReturn = 100 * (pow((endInvestment / initialInvestment), (1 / decimalYears)) - 1);

    printf("Initial Value:             %.2lf\n" , initialInvestment);
    printf("Final Value:               %.2lf\n" , endInvestment);
    printf("Years:                     %.5lf\n" , decimalYears);
    printf("Annualized Rate of Return: %.3lf\n" , rateOfReturn);


return 0;

}
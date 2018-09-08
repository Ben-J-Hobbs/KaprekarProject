/*
* Author: Ben Hobbs
* Date: 2018/08/27
*
* This program outputs the angle of refraction for a given input.
*/

    #include<stdlib.h>
    #include<stdio.h>
    #include<math.h>

int main() {

    double angleOfIncidence, firstIndexOfRefraction, secondIndexOfRefraction;

    firstIndexOfRefraction = 1;

    printf("This program outputs the angle of refraction using Snell's Law." "\n");

    printf("Enter the angle of incidence: ");
        scanf("%lf", &angleOfIncidence);

    printf("Enter the index of refraction: ");
        scanf("%lf", &secondIndexOfRefraction);
    
    printf("The angle of refraction is: %.2lf" , "\n" , (180/M_PI)*asin((sin((M_PI/180)*angleOfIncidence))/(secondIndexOfRefraction)));

    return 0;

}

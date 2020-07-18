#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
    /* Define temporary variables */
    float value;
    double result;
    
    /* take input value */
    input:printf("Please input a value between 0 and 1:") ;
    scanf("%f", &value);
    /* error checking */
    while (!((value <= 0) && (value >= 1))) {
        printf("[ERROR] The number you entered is out of range \n""Enter a number between 0 and 1\n");
        //input another number
        value = value;
        goto input;
    }
    /* Calculate the Sine of value */
    result = sin(value);

    /* Display the result of the calculation */
    printf("The Sine of %f is %f \n", value, result);

    return 0;
}

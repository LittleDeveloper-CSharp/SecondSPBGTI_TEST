/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float x, z, s;
    printf("Введите 2 переменные:");
    scanf("%f%f", &x, &z);
    s = sqrt(12 * pow(x, 4) 
    - 3 * pow(x, 3)
    + 4 * pow(x, 2)
    - 5 * x 
    + 6) - pow(log10(z), 2);

    printf("%f", s);
    
    return 0;
}

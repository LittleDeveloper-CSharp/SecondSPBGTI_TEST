/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float x, y, s;
    printf("Введите 2 переменные: ");
    scanf("%f%f", &x, &y);
    
    if(x < 0) {
        s = 3 * x + 2 * y;
    }
    else if(0 <= x && x <= 1){
        s = pow(x, 2) + 4 * sqrt(pow(y, 2) + 1);
    }
    else{
        s = 3 * log(fabs(asin(x / y)));
    }
    printf("%f", s);
    return 0;
}

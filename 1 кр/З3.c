/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float y, 
    h = 0.1,
    minX = -0.5,
    maxX = 0.5;
    for(float x = minX; x < maxX; x += h){
        if(x > 0){
            y = pow(log(x) / 3, 3);
        }else{
            y = 1 / sqrt(2) * log((1 
            + sqrt(2) * (x - 1)
            + sqrt(2 * pow(x, 2) + 1)) / 2);
        }
        
        printf("%.3f | %.3f\n\r", x, y);
    }
    
    return 0;
}

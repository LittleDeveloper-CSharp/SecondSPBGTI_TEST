/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int max = 20;
    float prefValue = 0.3,
    prefTwoValue = 0.75,
    prefTreeValue = 0.8,
    p = prefTreeValue * prefTwoValue * prefValue,
    currentValue;
    
    for(float i = 4; i < max; i++){
        currentValue = 0.25 * sin(prefValue) + 0.35 * cos(prefTreeValue);
       
       prefTreeValue = prefTwoValue;
       prefTwoValue = prefValue;
       prefValue = currentValue;
       p *= currentValue; 
    }
    
    printf("%.30f", p);
    return 0;
}

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int count = 20;
    int arr[count];
    for(int i = 0; i < count; i++){
        arr[i] =rand() % 20; 
    }
    
    int max, min,
    elementFirstPartialArray,
    elementSecondPartialArray;
    
    for(int i = 0; i < count / 2; i++){
        elementFirstPartialArray = arr[i];
        elementSecondPartialArray = arr[i + 10];
        if(elementFirstPartialArray > elementSecondPartialArray){
            max = elementFirstPartialArray;
            min = elementSecondPartialArray;
        }
        else{
            min = elementFirstPartialArray;
            max = elementSecondPartialArray;
        }
        arr[i] = max;
        arr[i + 10] = min;
    }
    
    for(int i = 0; i < count / 2; i++){
        printf("%d | %d\n\r", arr[i], arr[i + 10]);    
    }
    
    return 0;
}

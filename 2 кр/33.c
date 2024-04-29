#include <stdio.h>
#include <stdlib.h>
#include <math.h>

static int** GetFillArray(int size) {
    int** arr = (int**)malloc(size * sizeof(int*));
    for (int i = 0; i <= size; i++)
    {
        arr[i] = (int*)malloc(size * sizeof(int));
        for (int j = 0; j < size; j++)
        {
            arr[i][j] = rand() % 20;
        }
    }

    return arr;
}

void PrintArray(int** arr, int size) {
    for (int i = 0; i < size; i++)
    {
        printf("\n\r");
        for (int j = 0; j < size; j++)
            printf("%d ", arr[i][j]);
    }
}

int** CalculateNewArray(int** firstArray, int** secondArray, int size) {
    int** arr = (int**)malloc(size * sizeof(int*));
    for (int i = 0; i <= size; i++)
        arr[i] = (int*)malloc(size * sizeof(int));


    int maxElement = 0;
    int currentFirstElement = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            currentFirstElement = firstArray[i][j];
            if (maxElement < currentFirstElement) {
                maxElement = currentFirstElement;
            }
        }

        for (int j = 0; j < size; j++) {
            arr[i][j] = secondArray[i][j] * maxElement;
        }
    }
    
    return arr;
}

int main()
{
    int size = 6;
    int** firstArray = GetFillArray(size);
    int** secondArray = GetFillArray(size);

    printf("First array: ");
    PrintArray(firstArray, size);

    printf("\n\r\n\r");
    printf("Second array: ");
    PrintArray(secondArray, size);

    int** arr = CalculateNewArray(firstArray, secondArray, size);
    printf("\n\r\n\r");
    printf("Calculate array: ");
    PrintArray(arr, size);

    return 0;
}

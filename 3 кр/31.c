#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void PrintArray(int** arr, int size) {
    for (int i = 0; i < size; i++)
    {
        printf("\n\r");
        for (int j = 0; j < size; j++)
            printf("%d ", arr[i][j]);
    }
}

int** GetFillArray(int size) {
    int** arr = (int**)malloc(size * sizeof(int*));
    for (int i = 0; i <= size; i++)
        arr[i] = (int*)malloc(size * sizeof(int));

    int counter = 0;
    int deepSquere = 0;

    int a = size * size;

    while (counter < a) {
        int topBridge = size - deepSquere;
        int* topRow = arr[deepSquere];

        for (int i = deepSquere; i < topBridge; i++) {
            topRow[i] = ++counter;
        }

        if (counter == a)
            break;

        int rightBridge = size - deepSquere - 1;
        for (int i = deepSquere + 1; i < rightBridge; i++)
        {
            int* row = arr[i];
            row[rightBridge] = ++counter;
        }

        if (counter == a)
            break;

        int bottomBridge = size - deepSquere;
        int* bottomRow = arr[size - 1 - deepSquere];
        for (int i = bottomBridge - 1; i && bottomBridge > 0; i--) {
            bottomRow[i] = ++counter;
        }

        if (counter == a)
            break;

        int leftBridge = size - deepSquere;
        for (int i = leftBridge - 1; i && leftBridge > 0; i--)
        {
            int* row = arr[i];
            row[deepSquere] = ++counter;
        }

        if (counter == a)
            break;

        deepSquere++;
    }

    return arr;
}

int main()
{
    int size = 4;
    int** arr = GetFillArray(size);

    PrintArray(arr, size);
}
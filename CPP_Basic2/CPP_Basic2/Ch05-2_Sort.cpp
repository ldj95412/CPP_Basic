#include "io.h"

void BubbleSort() {
    int Number[] = { 10, 5, 2, 9, 7, 1, 3, 8, 6, 4 };
    int temp;

    for (int i = 9; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (Number[j] > Number[j + 1])
            {
                temp = Number[j];
                Number[j] = Number[j + 1];
                Number[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << Number[i] << " ";
    }
}


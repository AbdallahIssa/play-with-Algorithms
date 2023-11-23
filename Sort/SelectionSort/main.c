#include <stdio.h>
#include "SelectionSort.h"

void main(void) {

    int userData[DATA_LENGTH] = {5, 8, -1, 10, 7, 2, 9, 4, 0, 3};
    fillArray(userData, DATA_LENGTH);
    printf("Before Selection sort : \n");
    printArray(arr, DATA_LENGTH);
    Selection_Sort(arr, DATA_LENGTH);
    printf("After Selection sort : \n");
    printArray(arr, DATA_LENGTH);
    printf("\nSorted Successfully! \n");
}

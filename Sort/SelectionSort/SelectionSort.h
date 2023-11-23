#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#define DATA_LENGTH 10
extern int arr[DATA_LENGTH];

int fillArray(int *array, int length);
int Selection_Sort(int *array, int length);
int printArray(int *array, int length);
void swap2Numbers(int* num1 , int* num2);

#endif // SELECTIONSORT_H
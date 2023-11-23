#include <stdio.h>
#include <stdlib.h>
#include "myTypes.h"

#define Data_Length 10

int arr[Data_Length] = {0};

int fillArray(int *array, int length);
int Selection_Sort(int *array, int length);
int printArray(int *array, int length);
void swap2Numbers(int* num1 , int* num2);


void main(void) {

    int userData[Data_Length] = {5, 8, -1, 10, 7, 2, 9, 4, 0, 3};
    fillArray(userData, Data_Length);
    printf("Before Selection sort : \n");
    printArray(arr, Data_Length);
    Selection_Sort(arr, Data_Length);
    printf("After Selection sort : \n");
    printArray(arr, Data_Length);
    printf("\nSorted Successfully! \n");
}


int fillArray(int *array, int length)
{
    char ret_val = TRUE;
    if (length == 0 || array == NULL)
    {
        ret_val = FALSE;
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            arr[i] = array[i];
        }
    }
    return ret_val;
}

int Selection_Sort(int *array, int length)
{
    char ret_val = TRUE;
    if (length == 0 || array == NULL)
    {
        ret_val = FALSE;
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            for (int j = i+1; j < length; j++)
            {
                if(array[i] > array[j])
                {
                    swap2Numbers(&array[i], &array[j]);
                }
                else
                {
                    // Do nothing
                }
            }      
        }
    }
    return ret_val;
}


int printArray(int *array, int length)
{
    char ret_val = TRUE;
    if (length == 0 || array == NULL)
    {
        ret_val = FALSE;
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            // to avoid priniting ", " at the last number
            if((i+1) == length)
            {
                printf("%d \n", array[i]);
            }
            else
            {
                printf("%d, ", array[i]);
            }
        }
    }
    return ret_val;
}

void swap2Numbers(int* num1 , int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
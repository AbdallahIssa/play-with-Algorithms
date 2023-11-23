#include <stdio.h>
#include "myTypes.h"
#include "SelectionSort.h"

int arr[DATA_LENGTH] = {0};

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
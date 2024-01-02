#include <stdio.h>


int quickSort(int *array, int start, int end)
{
    if (start >= end || array == NULL)
    {
        return 0;
    }
    int temp = array[start];
    int left = start;
    int right = end;
    while (left < right)
    {
        while (left < right && temp < array[right])
        {
            right--;
        }
        if (left < right)
        {
            array[left++] = array[right];
        }
        while (left < right && temp > array[left])
        {
            left++;
        }
        if (left < right)
        {
            array[right--] = array[left];
        }
    }
    array[left] = temp;
    quickSort(array, start, left - 1);
    quickSort(array, right + 1, end);
    return 0;
}



int main()
{
    int array[] = {1, 30, 24, 5, 58, 12, 39};
    int length = sizeof(array) / sizeof(array[0]);
    quickSort(array, 0, length - 1);

    for (int idx = 0; idx < length; idx++)
    {
        printf("array[%d]=%d\n", idx, array[idx]);
    }
    printf("\n");
    return 0;
}
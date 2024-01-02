#include <stdio.h>

#define BUFFER_SIZE 6

int swap(int *num1, int *num2)
{
    int tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
    return 0;
}

int print(int *ptr, int len)
{
    for (int idx = 0; idx < len; idx++)
    {
        printf("array[%d]=%d\n", idx, ptr[idx]);
    }
    return 0;
}

void bubbleSort(int *array, int length)
{
    for (int end = length; end > 0; end--)
    {
        for (int begin = 1; begin < end; begin++)
        {
            if (array[begin] < array[begin - 1])
            {
                swap(&(array[begin]), &(array[begin - 1]));
            }
        }
    }
}

/* 优化：1*/
void bubbleSort02(int *array, int length)
{
    int sorted = 1;
    for (int end = length; end > 0; end--)
    {
        /* 是否排好序的标志*/
        sorted = 1;
        for (int begin = 1; begin < end; begin++)
        {
            if (array[begin] < array[begin - 1])
            {
                swap(&(array[begin]), &(array[begin - 1]));
                /* 进入这个判断，就没有排好序*/
                sorted = 0;
            }
        }
        if (sorted)
        {
            return;
        }
    }
}

/* 优化:3*/
void bubbleSort03(int *array, int length)
{
    int sorted = 1;
    int sortedIndex = 0;
    for (int end = length; end > 0; end--)
    {
        // /* 是否排好序的标志*/
        // sorted = 1;
        sortedIndex = 1;
        for (int begin = 1; begin < end; begin++)
        {
            if (array[begin] < array[begin - 1])
            {
                swap(&(array[begin]), &(array[begin - 1]));
                /* 更新排好的索引*/
                sortedIndex = begin;
            }
        }
        /* 更新end*/
        end = sortedIndex;
        // if (sorted)
        // {
        //     return;
        // }
    }
    return;
}

int main()
{
    int array[BUFFER_SIZE] = {11, 36, 24, 107, 23, 65};
    int length = sizeof(array) / sizeof(array[0]);

    bubbleSort03(array, length);
    print(array, length);

    return 0;
}
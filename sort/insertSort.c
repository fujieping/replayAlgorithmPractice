#include <stdio.h>

/* 插入排序*/
int insertSort(int *array, int length)
{
    int ret = 0;
    int pos = 0;
    for (int idx = 1; idx < length; idx++)
    {
        pos = array[idx];
        for (int begin = idx; begin >= 0; begin--)
        {
            if (pos < array[begin - 1])
            {
                array[begin] = array[begin - 1];
            }
            else
            {
                array[begin] = pos;
                break;
            }
        }
    }
    return ret;
}

int insertSort01(int *array, int length)
{
    int ret = 0;
    int copyNum = 0;
    for (int idx = 1; idx < length; idx++)
    {
        copyNum = array[idx];
        while (copyNum < array[idx -1])
        {

        }
    }
    return ret;
}

int main()
{
    int array[] = {36, 11, 24, 107, 23, 65};
    int length = sizeof(array) / sizeof(array[0]);

    insertSort(array, length);

    for (int idx = 0; idx < length; idx++)
    {
        printf("%d  ", array[idx]);
    }
    printf("\n");

    return 0;
}
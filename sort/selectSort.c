#include <stdio.h>

/* 选择排序：相较于冒泡减少了交换的次数，时间复杂度o(n^2)*/

int print(int *ptr, int len)
{
    for (int idx = 0; idx < len; idx++)
    {
        printf("array[%d]=%d\n", idx, ptr[idx]);
    }
    return 0;
}

int selectSort(int *array, int length)
{
    int ret = 0;
    int minValue = 0;
    int minIndex = 0;
    for (int pos = 0; pos < length; pos++)
    {
        minValue = array[pos];
        for (int begin = pos + 1; begin < length; begin++)
        {
            /* 遍历到的元素比最小值要小，更新最小值*/
            if (minValue > array[begin])
            {
                minValue = array[begin];
                minIndex = begin;
            }
        }

        if (array[pos] > minValue)
        {
            int tmp = array[pos];
            array[pos] = minValue;
            array[minIndex] = tmp;
        }
    }

    return ret;
}

int main()
{
    int array[] = {11, 36, 24, 107, 23, 65};
    int length = sizeof(array) / sizeof(array[0]);
    selectSort(array, length);
    print(array, length);
    

    return 0;
}
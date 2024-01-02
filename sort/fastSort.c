#include <stdio.h>

#define BUFFER_SIZE 7


int fastSort(int *ptr, int left, int right)
{
    if (left >= right)
    {
        return 0;
    }
    int cmp = ptr[left];
    int left1 = left;
    int right1 = right;
    while (left1 < right1)
    {
        while (left < right && ptr[right1] > cmp)
        {
            right1--;
        }
        if (left1 < right1)
        {
            ptr[left1] = ptr[right1];
            left1++;
        }
        while (left1 < right1 && ptr[left1] < cmp)
        {
            left1++;
        }
        if (left1 < right1)
        {
            ptr[right1] = ptr[left1];
            right1--;
        }
    }
    ptr[left1] = cmp;

    fastSort(ptr, 0, left1 - 1);
    fastSort(ptr, right1 + 1, right);
    return 0;
}


int main()
{
    int Array[BUFFER_SIZE] = {1, 30, 24, 5, 58, 12, 39};
    fastSort(Array, 0, 6);

    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("%d  ", Array[idx]);
    }
    printf("\n");
    return 0;
}
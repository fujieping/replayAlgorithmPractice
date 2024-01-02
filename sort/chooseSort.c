#include <stdio.h>

#define BUFFER_SIZE 7


int main()
{
    int Array[BUFFER_SIZE] = {1, 30, 24, 5, 58, 12, 39};
    int pos = 0;
    int ptr = 0;
    int cmp = 0;

    for (int idx1 = 0; idx1 < BUFFER_SIZE - 1; idx1++)
    {
        pos = idx1;
        ptr = idx1 + 1;
        /* 找到pos后面的最小值，把最小值的位置给ptr*/
        for (int idx2 = idx1 + 1; idx2 < BUFFER_SIZE; idx2++)
        {
            if (Array[ptr] > Array[idx2])
            {
                ptr = idx2;
            }
        }
        /* pos 与 后面最小值比较*/
        if (Array[pos] > Array[ptr])
        {
            cmp = Array[pos];
            Array[pos] = Array[ptr];
            Array[ptr] = cmp;
        }

    }
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("%d  ", Array[idx]);
    }
    printf("\n");
    return 0;
}
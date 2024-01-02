#include <stdio.h>

#define BUFFER_SIZE 7

int main()
{
    int Array[BUFFER_SIZE] = {3, 1, 24, 5, 58, 12, 39};
    int ptr = 0;

    for (int idx = 1; idx < BUFFER_SIZE; idx++)
    {
        ptr = Array[idx];
        for (int jdx = idx; jdx >= 0; jdx--)
        {
            if (ptr < Array[jdx - 1])
            {
                Array[jdx] = Array[jdx - 1];
            }
            else
            {
                Array[jdx] = ptr;
                break;
            }
        }
    }

    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("%d  ", Array[idx]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>
#include <assert.h>
#include <limits.h>

int max(int* numbers, int size)
{
    // Excercise 2
    // Implement your code below...
    //Precondition: size > 0
    assert(size > 0);
    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] > max)
            max = numbers[i];
    }

    return max;
}

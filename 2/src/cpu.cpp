#include "cpu.h"
#include "ram.h"


static int sumArray(const int* arr, int countEl)
{
    int sum = 0;
    for (short i = 0; i < countEl; i++)
        sum += *(arr + i);
    return sum;
}

int cpu::compute()
{
    return sumArray(ram::read(), ram::buffer_size);
}

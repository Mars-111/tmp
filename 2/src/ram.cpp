#include "ram.h"

bool ram::write(const int new_buffer[ram::buffer_size])
{
    for (short i = 0; i < 8; i++)
        *(ram::buffer + i) = *(new_buffer + i);
    return true;
}

bool ram::write(const int* new_buffer, unsigned int countEl)
{
    if (countEl > 8) countEl = 8;
    for (unsigned int i = 0; i < countEl; i++)
        *(ram::buffer + i) = *(new_buffer + i);
    return true;
}

bool ram::write(const int new_el, unsigned int item_number)
{
    if (item_number > 8) return false;
    ram::buffer[item_number] = new_el;
    return true;
}

const int* ram::read() 
{
    return ram::buffer;
}



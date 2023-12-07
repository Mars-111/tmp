#include "kbd.h"
#include "ram.h"
#include <iostream>

void kbd::input_ram()
{
    std::cout<<"Enter a buffer consisting of "<<ram::buffer_size<<" elements: ";
    for (short el = 0; el < ram::buffer_size; el++)
    {
        std::cin>>ram::buffer[el];
    }
}



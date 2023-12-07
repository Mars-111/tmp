#include "gpu.h"
#include "ram.h"
#include <iostream>

void gpu::output()
{
    for (unsigned short i = 0; i < ram::buffer_size; i++)
    {
        std::cout<<ram::read()[i]<<" ";
    }
}
#pragma once

namespace ram
{
    static const unsigned int buffer_size = 8;
    static int buffer[buffer_size];
    bool write(const int new_buffer[buffer_size]);
    bool write(const int* new_buffer, unsigned int countEl);
    bool write(const int new_el, unsigned int item_number);

    const int* read();
}
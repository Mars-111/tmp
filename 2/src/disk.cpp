#include "disk.h"
#include "ram.h"
#include <fstream>
#include <iostream>

#define FILE "ram_data.bin"

void disk::save()
{
    std::ofstream file(FILE, std::ios::binary); //Как по мне для таких задачь надо использовать бинарный файл
    if (!file.is_open()) //Как он может не открыться? Сделал потому что вы в примере так же делали
    {
        std::cerr<<"DISK ERROR. ofs! Not open ram_data.bin file.\n";
        exit(1);
    }
    file.write((char*)ram::buffer, sizeof(ram::buffer));
    file.close();
}

void disk::load()
{
    std::ifstream file(FILE, std::ios::binary);
    if (!file.is_open())
    {
        std::ofstream file_tmp(FILE, std::ios::binary);
        file_tmp.close();
        file.open(FILE);
        if (!file.is_open())
        {
            std::cerr<<"DISK ERROR. ifs! Not open ram_data.bin file.\n";
            exit(1);
        }
    }
    file.read((char*)ram::buffer, sizeof(ram::buffer));
}


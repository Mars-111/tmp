#include <iostream>
#include "cpu.h"
#include "disk.h"
#include "gpu.h"
#include "kbd.h"
#include "ram.h"
#include <string>
int main()
{
    std::string input;
    while (true)
    {
        std::cin>>input;
        std::cout<<">> ";
        if (input == "sum")
        {
            std::cout<<cpu::compute();
        }
        else if (input == "save")
        {
            disk::save();
            std::cout<<"successfully";
        }
        else if (input == "load")
        {
            disk::load();
            std::cout<<"successfully";
        }
        else if (input == "input")
        {
            kbd::input_ram();
        }
        else if (input == "display")
        {
            gpu::output();
        }
        else if (input == "exit")
        {
            std::cout<<"Goodbye!";
            break;
        }
        std::cout<<std::endl;
    }


    return 0;
}
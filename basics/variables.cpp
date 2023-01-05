//variables occupy memory.
// Variables have premitive data types

#include <iostream>
int main()
{
    int variable = 8; // signed integer (-2b to 2b)   
    unsigned int var; // this is unsigned interger (0 to 4b)

    std::cout<< variable << std::endl;
    variable = 20;
    std::cout<< variable << std::endl;

    // float a = 5.5; //this actually gives you double.
    float a = 5.5f; //this gives number in float. You have to include f with number
    std::cout<< a << std::endl;

    //How to check size of datatype

    std::cout<< sizeof(int) <<std::endl;
    std::cout<< sizeof(double) <<std::endl;

}
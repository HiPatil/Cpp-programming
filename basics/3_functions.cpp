#include <iostream>

// function dedefinition
int multiply(int a, int b)
{
    return a*b;
}

//function can be declared and then defined after main.               
//int multiply(int a, int b);

int main()
{
    int result = multiply(3, 2);
    std::cout<<result<<std::endl;
}
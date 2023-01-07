#include <iostream>

#define log(x) std::cout<<x<<std::endl

int main()
{
    // void* ptr = NULL; this is useless pointer. We cannot access or write anything from/to address 0
    int var = 8;
    // void* ptr = &var; // this wont work as compiler thinks the data in address is void. We need to tell compiler that data in pointer address is int
    int* ptr = &var;
    *ptr = 10;
    log(ptr);
    log(var);
}
#include <iostream>
#include <cstring>
int main()
{
    //originally, if we create a variable, data is stored on stack. 
    //If we want to store on heap
    char* buffer = new char[8]; // allocating a 8 bytes memory and return a pointer to beginning of that memory.
    memset(buffer, 0, 8); //fills block of memory with data that we specify. Take (pointer, value, size)

    // since data is in heap, we must also delete it.
    delete[] buffer;
}
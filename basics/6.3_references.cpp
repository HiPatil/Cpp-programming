#include <iostream>

#define out(x) std::cout<<x<<std::endl

/*
void Increment(int value)
{
    value++;
}
-- This will take value from main function and just declare that value into a varible.
-- Since function doesn't return anything, we will still get 5 as output.
*/

void Increment(int* value) // we use pointer to variable a, so the above error will not occur
{
    (*value)++; // brackets ensure that pointer is dereference first and then increments. Address gives data and data is incremented
}

// can be made more easier with referencing directly instead of using pointer.
void Increment_ref(int& value)
{
    value++;
}

int main()
{
    int a = 5;
    // Increment(&a);
    Increment_ref(a);
    out(a);

    int& ref = a;
    ref = 2;
    out(ref);
}
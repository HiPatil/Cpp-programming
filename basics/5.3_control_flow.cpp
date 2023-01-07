#include <iostream>

int main()
{
    /* control flow statement gives more control over loop. 
    continue: can be only used inside a loop. Go to next iteration, if there is one or end loop.
    break: loops and switch, get out of loop. 
    return: get out of loop and function as well. 
    */
   for (int i = 0; i<5; i++)
   {
    // std::cout<< "Hello" <<std::endl;
    // continue; // here this will do nothing as it is gonna go to next iteration anyways

    if (i%2 == 0)
        continue; // here it will skip every second iteration.
    std::cout<< i <<std::endl;

    if (i%2 == 1)
        break; // breaks loop when condition is executed.
    std::cout<<"Hello" <<std::endl;
   }
}
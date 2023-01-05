#include <iostream>

int main()
{
    /*
    while syntax
    check condition
    while (condition)
    */
   int i=0;
   while(i<5)
   {
    std::cout<<"Hello World!"<<std::endl;
    i++;
   }
}

/*
Difference between for and while loops and when to use them
1. Its dependent on style of programming
2. If you have certain condition that already exist, then use while loop. 
3. Go through array, with a particular size, then use for loop. Can you iterable variable for accessing array.
*/


// Do ... while loop
/*
do
{

} while (i<5)

this will be executed atleast once no matter what. Even if condition is not true.
*/
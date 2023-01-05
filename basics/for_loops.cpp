#include <iostream>

//Can be done like below if you want to do something more than one time.
/*
int main()
{
    std::cout<< "Hello World!"<< std::endl;
    std::cout<< "Hello World!"<< std::endl;
    std::cout<< "Hello World!"<< std::endl;
    std::cout<< "Hello World!"<< std::endl;
    std::cout<< "Hello World!"<< std::endl;

}
*/
//Else, we can use for loop

int main()
{
    /*
    for syntax
    3 parts, each parts seperated by ;
    1st part, variable declaration
    2nd part, variable limit (condition, check if true)
    3rd part, variable incrementing OR code to be called before next iteration
    */
    for (int i = 0; i < 5; i++)
    {
        std::cout<< "Hello World!"<< std::endl;

    }

    // Also can be written as
    /*
    int i=0
    for ( ; i<5; )
    {

    }
    */
}

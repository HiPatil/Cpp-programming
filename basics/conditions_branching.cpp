#include <iostream>

int main()
{
    int x = 6;
    bool comparisonResult = x == 5; // == is comparing operator. If equal then return true, or else false.
    // if syntax
    // we can directly also include x==5 in the if bracket.
    if (comparisonResult)  //is this not zero? If yes then execute
    /* if code line in this if-else is one line no need of { }, we can directly write the line of code
        But to keep everything consistent, we include these paranthesis */
    {
        std::cout<<"Hi, number is 5"<<std::endl;
    }
    else if (x==6)
    {
        std::cout<<"Number is 6"<<std::endl;
    }
    else
    {
        std::cout<<"Hi, number is not 5"<<std::endl;
    }
}
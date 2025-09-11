/* Program: 2
 * Create program to ask the user for keyboard ASCII charcter and convert it to decimal value */
#include <iostream>

#define ASCII_CODE_VALUE 255

int main()
{
    /*  declare vairables */
    char InputValue;

    /* ask user to enter value and store the value */
    std::cout << " please enter the key ASCII character to convert it into decimal: ";
    std::cin >> InputValue;

    /* convert input value to ASCII */
    int ConvertedValue = static_cast<int>(InputValue);

    if(ConvertedValue >= ASCII_CODE_VALUE){
        /* check if the given value is ASCII character or not */
        std::cout << " the value you entred is not ASCII character!" << std::endl;
    }
    else{
        /* return the converted value */
        std::cout << "you ASCII charcter value is :" << ConvertedValue << std::endl;

    }
    return 0;
}
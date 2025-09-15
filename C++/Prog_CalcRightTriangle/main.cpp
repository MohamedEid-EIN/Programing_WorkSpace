#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    int Counter2 = 0;
    int Sum = 0;
    int left, right;
    std::vector<int> TriangleValues(3);
    std::cout <<" Please enter the triangle a, b, c: " << std::endl;

    for(int &Counter:TriangleValues)
    {
        std::cout << "Enter triangle : ";
        std::cin >> Counter;
    }
    TriangleValues[0] *= TriangleValues[0];
    TriangleValues[1] *= TriangleValues[1];
    TriangleValues[2] *= TriangleValues[2];

    Sum = TriangleValues[0] + TriangleValues[1];
    if(Sum == TriangleValues[2])
    {
        std::cout << " is right angle tirnagle" << std::endl;
    }
    else{
        std::cout << "it's not right angel triangle" << std::endl;
    }
    for(int Counter:TriangleValues)
    std::cout<< Counter<< std::endl;




    

    return 0;
}
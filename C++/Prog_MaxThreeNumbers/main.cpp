#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int Counter = 3;

    std::vector<int> Numbers;
    Numbers.push_back(0);
    Numbers.push_back(0);
    Numbers.push_back(0);

    int maxValue = 0;

    std::cout << "Please enter three numbers" << std::endl;
    std::cout <<"First number: ";
    std::cin >> Numbers[0];
    std::cout << "Second Number: ";
    std::cin >> Numbers[1];
    std::cout << "Third Number: ";
    std::cin >> Numbers[2];
    

    maxValue = *std::max_element(Numbers.begin(), Numbers.end());
    std::cout << "The max number is: " << maxValue << std::endl;
    
    return 0;
}
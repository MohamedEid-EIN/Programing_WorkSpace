#include <iostream>
#include <vector>

/* Declaring my local Alias */
namespace LibCall{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::vector;
    using std::abs;
}

int main()
{

   /* declare dynamic container to store values, with other used variables */
   LibCall::vector<unsigned int> V_GetNumbers;
   signed int s32_InputNumber = 0;
   unsigned u32_ConvertedInputNumber;
   unsigned int u32_Sum = 0;

   /* ask user to enter a value and store the returned value from the user */
   LibCall::cout << "Please enter a number: ";
   LibCall::cin >> s32_InputNumber;

   /* use the abs function to get absoulte value, incase the user enter a negative number */
   u32_ConvertedInputNumber = static_cast<unsigned int>(std::abs(s32_InputNumber));

   /* Loop untill you get all possible numbers  */
   while(u32_ConvertedInputNumber != 0)
   {
    /* add the number in the vector to store it*/
    V_GetNumbers.insert(V_GetNumbers.begin(), u32_ConvertedInputNumber % 10);

    /* remove the stored number */
    u32_ConvertedInputNumber /= 10;
   }

   /* loop until you reach the end of vector */
   for(unsigned int Counter: V_GetNumbers)
   {
    /* store the value and sum the result*/
    u32_Sum += Counter;
   }
   /* print out the sum of the numbers*/
   LibCall::cout << " The summ is: " << u32_Sum << LibCall::endl;
   return 0;
}
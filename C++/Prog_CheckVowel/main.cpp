#include <iostream>
#include <array>
#include <cctype>

int main ()
{

    int Counter = 0;
    bool CharacterVowel = false;
    unsigned char InputCharacter;
    std::array<char,5> LowerCaseVowelContainer = {'a', 'e', 'i', 'o', 'u'};
    std::array<char,5> UpperCaseVowelContainer;
    for(char Character: LowerCaseVowelContainer)
    {
        UpperCaseVowelContainer[Counter] = std::toupper(static_cast<unsigned char>(Character));
        Counter++;
    }

    std::cout << "Kindly enter a character: ";
    std::cin >> InputCharacter;

    for(int Counter = 0; Counter < sizeof(LowerCaseVowelContainer); Counter++)
    {
        if(UpperCaseVowelContainer[Counter] == InputCharacter)
        {
            CharacterVowel = true;
            break;
        }
        else if(LowerCaseVowelContainer[Counter] == InputCharacter)
        {
            CharacterVowel = true;
            break;
        }
        else
        {
            
            CharacterVowel = false;
        }
    }
    if(CharacterVowel == true)
    {
        std::cout << "Character is vowel" << std::endl;
    }
    else{
        std::cout << "Character is not vowel" << std::endl;
    }


    return 0;
}
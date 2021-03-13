#include <iostream>

int main()
{
    // Expression Statements - Game introduction for player
    std::cout << "The codes, punch them in Agent! We are all riding on you now." << std::endl;
    std::cout << "You must enter the correct codes to continue, or all will be lost.. " << std::endl;

    // Declaration Statements - Codes needed for player to enter
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 5;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print sum and product to the terminal
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;
    std::cout << "Think long and carefully.. " << std::endl;

    int PlayerGuess;

    return 0;
}
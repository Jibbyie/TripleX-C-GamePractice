#include <iostream>
void PrintIntroduction()
{
     // Expression Statements - Game introduction for player
    std::cout << "\n\nThe codes, punch them in Agent! We are all riding on you now." << std::endl;
    std::cout << "You must enter the correct codes to continue, or all will be lost..\n\n " << std::endl;
}

bool PlayGame()
{
    PrintIntroduction();

    // Declaration Statements - Codes needed for player to enter
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 5;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print sum and product to the terminal
    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct;
    std::cout << "\nThink long and carefully.. \n"; std::cout << "Enter in your guesses seperated by a space or on seperate lines:\n";

    // Store Player Guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    
    // Check Player Guess 
    if(GuessSum == CodeSum & GuessProduct == CodeProduct) 
    {
        std::cout << "Your Guesses are correct!\n";
        return true;
    } 
    else 
    {
        std::cout << "All is lost..\n";
        return false;
    }
}

int main()
{
    while(true)
    {

        bool bLevelComplete =  PlayGame();
        std::cin.clear();
        std::cin.ignore();
    }
    
    return 0;
}
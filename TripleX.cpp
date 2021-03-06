#include <iostream>
#include <ctime>
void PrintIntroduction(int Difficulty)
{
     // Expression Statements - Game introduction for player
    std::cout << "\n\nThe codes, punch them in Agent! We are all riding on you now. Level " << Difficulty << std::endl;
    std::cout << "secure server room.. You must enter the correct codes to continue, or all will be lost..\n\n " << std::endl;
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    // Declaration Statements - Codes needed for player to enter
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

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
        std::cout << "Excellent Agent! Keep going!\n";
        return true;
    } 
    else 
    {
        std::cout << "All is lost.. Or is it? You have one more chance Agent! Keep Going!\n";
        return false;
    }
}

int main()
{
    srand(time(NULL));

    int levelDifficulty = 1;
    const int MaxDifficulty = 5;

    while(levelDifficulty <= MaxDifficulty) // Loop game until all levels completed
    {

        bool bLevelComplete =  PlayGame(levelDifficulty);
        std::cin.clear(); // Clears errors
        std::cin.ignore(); // Discards buffer

        if(bLevelComplete)
        {
            levelDifficulty++;
        }
    }
    
    std::cout << "Congratulations! You've escaped the facility and saved the world!";
    return 0;
}
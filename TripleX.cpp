#include <iostream>

int main()
{
    // Expression Statements - Game introduction for player
    std::cout << "The codes, punch them in Agent!" << std::endl;
    std::cout << "You need to enter the correct codes to continue.." << std::endl;

    // Declaration Statements - Codes needed for player to enter
    const int a = 4;
    const int b = 3;
    const int c = 5;

    const int sum = a + b + c;
    const int product = a * b * c;

    // Print sum and product to the terminal
    std::cout << sum << std::endl;
    std::cout << product << std::endl;

    return 0;
}
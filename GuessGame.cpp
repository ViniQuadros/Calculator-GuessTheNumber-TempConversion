#include <iostream>

int main()
{
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "****** Number Guess Game ******" << '\n';

    do
    {
        std::cout << "Enter a number (1-100): ";
        std::cin >> guess;
        tries++;

        if(guess < num)
        {
            std::cout << "Too low" << '\n';
        }
        else if (guess > num)
        {
            std::cout << "Too High" << '\n';
        }
        else
        {
            std::cout << "Correct" << '\n';
            std::cout << "Your tries: " << tries << '\n';
        }

    } while (guess != num);
    
    std::cout << "********************";
}
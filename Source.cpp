#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));      // initialize random seed

    int num = rand() % 100 + 1; // generates a random number between 1 and 100
    int guess, tries = 0, games = 0;
    char playAgain;

    do {
        games++;
        tries = 0;

        std::cout << "Guess a number between 1 and 100: ";

        do {
            std::cin >> guess;
            tries++;

            if (guess > num) {
                std::cout << "Too high! Try again: ";
            }
            else if (guess < num) {
                std::cout << "Too low! Try again: ";
            }
            else {
                std::cout << "Congratulations! You guessed the number in " << tries << " tries." << std::endl;
            }
        } while (guess != num);

        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;

        num = rand() % 100 + 1; // generate a new random number for the next game
    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "You played " << games << " game(s). Goodbye!" << std::endl;

    return 0;
}

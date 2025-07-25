#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main() {
    int numberToGuess, userGuess, attempts = 0;

    // Seed the random number generator with the current time
    srand(time(0));
    numberToGuess = rand() % 100 + 1; // Random number between 1 and 100

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Guess a number between 1 and 100." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else if (userGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }

    } while (userGuess != numberToGuess);

    return 0;
}

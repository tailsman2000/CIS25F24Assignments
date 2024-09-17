#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

// Function to roll a die
int rollDie(int minValue, int maxValue) {
    return (rand() % (maxValue - minValue + 1)) + minValue;
}

int main() {

    int userGuess;
    // Setting up random number generator
    long elapsedSeconds = time(0);
    srand(elapsedSeconds);

    // Define the range for the dice
    const int minValue = 1;
    const int maxValue = 99;

    int randomNumber = rollDie(minValue, maxValue);

    // Loop that finds a secret number, allows the user to guess. Also added a hint system as to whether the number is too high or low
    cout << "Enter a number between 1 and 99 to guess the number.";
    while (userGuess != randomNumber)
    {
        cout << "Enter your guess: ";
        cin >> userGuess;

    if (userGuess < randomNumber)
    {
        cout << "Too low, try again.";
    }

        else if (userGuess > randomNumber)
        {
            cout << "Too high, try again.";
        }

            else if (userGuess == randomNumber)
            {
                cout << "Congrats!, you won.";
            }
    }
    return 0;
}
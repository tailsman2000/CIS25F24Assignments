#include <iostream>
#include <cstdlib>  
#include <ctime>    

// Function to roll a die
int rollDie(int minValue, int maxValue) {
    return (rand() % (maxValue - minValue + 1)) + minValue;
}

int main() {
    //Setting up random number generator
    long elapsedSeconds = time(0);
    srand(elapsedSeconds);

    // Define the range for the dice
    const int minValue = 1;
    const int maxValue = 6;

    int die1 = rollDie(minValue, maxValue);
    int die2 = rollDie(minValue, maxValue);

    std::cout << "You rolled a " << die1 << " and a " << die2 << std::endl;

    return 0;
}
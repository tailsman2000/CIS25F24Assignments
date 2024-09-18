# include <iostream>

using namespace std;

// Function used to calculate the factorial
long factorial(int num){
    long result = 1;
    for(int i = 1; i <= num; ++i){
        result *= i;
    }
    return result;
}

int main(){
    int userInput;

    cout << "Please enter a positive integer (whole number): ";
    cin >> userInput;

    // Exception handling to check if the input is valid
    if(userInput < 0){
        cout << "Please input a positive integer." << endl;
    }
    else{
        long factResult = factorial(userInput);
        cout << "The factorial of " << userInput << " is: " << factResult << endl;
    }
    return 0;
}
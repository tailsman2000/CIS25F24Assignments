# include <iostream>

using namespace std;

int main (){
    float num1;
    float num2;

    cout << "Enter a number: " << endl;
    cin >> num1;

    cout << "Enter another number: " << endl;
    cin >> num2;

    //Conditional Operator that determines of number 1 or number 2 is bigger
    float biggerNumber = (num1 > num2) ? num1 : num2;

    cout << "The bigger number is: " << biggerNumber << endl;

    return 0;


}
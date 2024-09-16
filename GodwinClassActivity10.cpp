# include <iostream>

using namespace std;

int main(){
    float salesInput;
    float commission;

    cout << "Enter the total amount of sales made: $";
    cin >> salesInput;

    // If Else Statements that determine whether the user's input is less than 10000 dollars, in between 10000 and 15000 dollars
    // or greater than 15000 thousand dollars. Calculates the input with the given commission rate, then outputs the commision. 
    if (salesInput < 10000.0f) 
    {
        commission = 0.10f;
        cout << "Your commision rate is 10 percent, the total earned commision is: $" 
        << salesInput * commission;
    }
        else if(salesInput >= 10000.0f && salesInput <= 15000.0f)
        {
            commission = 0.15f;
            cout << "Your commision rate is 15 percent, the total earned commision is: $"
            << salesInput * commission;
        }
            else if(salesInput > 15000.0f)
            {
                commission = 0.20f;
                cout << "Your commision rate is 20 percent, the total earned commision is: $"
                << salesInput * commission;
            }
}
#include <iostream>

using namespace std;

int main () { 
    char isCitizen;
    char bachelorsDegree; 
    float yearsExperienced; 

    cout << "Are you a US Citizen (y/n)" << endl;
    cin >> isCitizen; 

    // If statement that checks if the user is a citizen, how many years of experience they have and if they have a bachelor's
    // Depending on the answer, the program will tell the user if they are eligible for the job or not. 
    if (isCitizen == 'y')
    {
        cout << "Do you have a bachelor's degree? (y/n)";
        cin >> bachelorsDegree;
        cout << "How many years of experience do you have?";
        cin >> yearsExperienced;
            if (bachelorsDegree == 'y' || yearsExperienced >= 2)
            {
            cout << "You are eligible for the job!";
            }
                else if (bachelorsDegree == 'n' && yearsExperienced < 2)
                {
                   cout << "You are not eligible for this job";
                }
                // Exception handling via else
                    else 
                    {
                        cout << "Invalid input, please input y or n, as well as a valid number";
                    }
    }
    else if (isCitizen == 'n')
    {
        cout << "You are not eligible for the job";
    }
    
    //Exception handling via else
    else
    {
        cout << "Please enter y or n.";
    }
}


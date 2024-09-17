# include <iostream>

using namespace std;

//Function that calculates the average
double averageTemperature (double temperatures[], int size){
    double sum;
    for(int i = 0; i < size; ++i){
        sum += temperatures[i];
    }
    return sum/size;
}

int main (){
    int tempTotal;
    cout << "Enter the amount of temperatures you would like to calculate as a whole number: " << endl;
    cin >> tempTotal;

    double temperatures [tempTotal];

    for(int i = 0; i < tempTotal; ++i){
        cout << "Enter a temperature: ";
        cin >> temperatures[i];
    }

    //Calculates and outputs the final temperature according to the user
    double average = averageTemperature(temperatures, tempTotal);
    cout << "The average temperature is: " << average << " degrees" << endl;

    return 0;
}
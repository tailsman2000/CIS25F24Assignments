# include <iostream>
# include <string>

using namespace std;

int main (){
    string listOfNames[3];

    //Asking the user to input 3 names
    for(int i = 0; i < 3; i++){
        cout << "Enter name number " << i + 1<< ": ";
        getline(cin, listOfNames[i]);
    }

    //Outputs the first name typed
    cout << "The first name inputted is: " << listOfNames[0] << endl;

    return 0;
}
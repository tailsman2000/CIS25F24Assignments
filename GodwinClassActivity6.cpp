# include <iostream>

using namespace std;

int main (){
string streetAddress, city, state, zipCode;
    cout << "What is your street address?" << endl;
    getline(cin, streetAddress);
    
    cout << "What city do you live in?" << endl;
    getline(cin, city);

    cout << "What state do you live in?" << endl;
    getline(cin, state);

    cout << "What is your zipcode?" << endl;
    getline(cin, zipCode);

    cout << streetAddress << endl;
    cout << city << "," << state << "," << zipCode << ".";

}
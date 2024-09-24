#include <iostream>
using namespace std; 
  
int main(){
    int numofRows;

    cout << "Enter the number of rows that you want to have" << endl;
    cin >> numofRows;

    for (int i = 1; i <= numofRows; ++i){
        for (int j = 1; j <= i; ++j){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
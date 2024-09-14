# include <iostream>
# include <iomanip>


using namespace std;

int main (){
    //Prints the header
    cout << left << setw(10) << "Course" << right << setw(10) 
    << "Student" << endl;
    //Prints the rows
    cout << left << setw(10) << "C++" << right << setw(10) 
    << "100" << endl;
    cout << left << setw(10) << "JavaScript" << right << setw(10) 
    << "50" << endl;
}
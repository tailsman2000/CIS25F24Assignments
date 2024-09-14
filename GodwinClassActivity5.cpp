# include <iostream>
# include <limits>


using namespace std;

int main (){
   cout << "Size of short: " << sizeof(short) << " bytes" << endl;
   cout << "Size of double: " << sizeof(double) << " bytes" << endl;

   cout << "Minimum value of short: " << numeric_limits<short>::min() << endl;
   cout << "Maximum value of short: " << numeric_limits<short>::max() << endl;

   cout << "Minimum value of double: " << numeric_limits<double>::min() << endl;
   cout << "Maximum value of double: " << numeric_limits<double>::max() << endl;

}
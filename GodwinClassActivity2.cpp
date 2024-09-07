#include <iostream>

using namespace std;

int main()
{
    // Declaring Total Sales Made, Tax Rate, and how much will be taxed
    double totalSales =  95000;
    double countyTaxRate = 0.02;
    double estateTaxRate = 0.04;
    // Calculating the amount needed to pay, then adding the values
    double countyTax = totalSales * countyTaxRate;
    double estateTax = totalSales * estateTaxRate;
    double totalTax =  countyTax + estateTax;

    cout << "The gross sales is " << totalSales << ". \n";
    cout << "The total amount due for your county tax is " << countyTax << ". \n";
    cout << "The total amount due for your estate tax is " << estateTax << ". \n";
    cout << "You will need to pay " << totalTax << " in total. \n";

}
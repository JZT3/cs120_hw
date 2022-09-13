#include <iostream>
using namespace std;

int main() {
    int file_size = 0;
    double sales = 9.99;
    cout<< "Hello World " << endl
        << sales << endl;

    int a = 1;
    int b = 2; 
    int temp = a;
    a=b;
    b=temp;

    cout<< a << endl
        << b << endl;

    const double pi = 3.14;

    double x = 10;
    int y = 5;
    double z = ((x+10)/(3*y));
    cout << z << endl;



    double sales_tax = 95000;
    double state_tax = 0.04;
    double county_tax = 0.02;
    double take_home_pay = sales_tax - ((sales_tax * state_tax) + (sales_tax * county_tax));
    cout << "Gross Pay: $" << take_home_pay << endl;


    return 0;
}

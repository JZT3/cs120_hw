#include <iostream>
using namespace std;

int main(){
    int fahrenheit;
    double celsius_conv = (fahrenheit-32)*(5/9);
    cout << "What is the temp near you?: ";
    cin >> fahrenheit;
    cout << celsius_conv;
    return 0;
}

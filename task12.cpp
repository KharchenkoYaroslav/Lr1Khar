#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    int number, exponent;

    cout << "Введіть число та степінь(цілі числа): ";
    cin >> number >> exponent;

    double result = pow(number, exponent);

    cout << number << " в степені " << exponent << " дорівнює " << result << endl;

    return 0;
}
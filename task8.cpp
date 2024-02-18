#include <iostream>
#include <cmath>

using namespace std;

double myroot(int num) {
    return sqrt(num);
}


double myroot(long int num) {
    return sqrt(num);
}


double myroot(double num) {
    return sqrt(num);
}

int main() {
    int intNum = 25;
    long int longNum = 1234567890;
    double doubleNum = 22.09;

    cout << "Square root of " << intNum << " is " << myroot(intNum) << endl;
    cout << "Square root of " << longNum << " is " << myroot(longNum) << endl;
    cout << "Square root of " << doubleNum << " is " << myroot(doubleNum) << endl;

    return 0;
}
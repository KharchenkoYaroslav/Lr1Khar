#include <iostream>
#include <windows.h>
#include <cstdlib> 

using namespace std;

int min(int a, int b);
double min(char* a, char* b);
double min(double a, double b);

int main() {
    SetConsoleOutputCP(65001);
    cout << "Мінімальне число з двох цілих чисел: " << min(5, 10) << endl;
    cout << "Мінімальний символ з двох символів: " << min("71.5", "2.56") << endl;
    cout << "Мінімальне число з двох дійсних чисел подвійної точності: " << min(3.14, 2.71) << endl;

    return 0;
}
int min(int a, int b) {
    return (a < b) ? a : b;
}

double min(char* a, char* b) {
    return (atof(a) < atof(b)) ? atof(a) : atof(b);
}

double min(double a, double b) {
    return (a < b) ? a : b;
}
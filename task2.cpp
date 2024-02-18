#include <iostream>
#include <windows.h>

#define MtoF 3.2808399

using namespace std;

double MetersToFeet(double meters);
double FeetToInches(double feet);

int main() {
    SetConsoleOutputCP(65001);
    double meters;

    while (true) {
        cout << "Введіть число метрів (0 щоб вийти): ";
        cin >> meters;

        if (meters == 0) {
            break; 
        }

        double feet = MetersToFeet(meters);
        double inches = FeetToInches(feet);

        cout << meters << " метрів = " << feet << " футам та " << inches << " дюймам." << endl;
    }

    return 0;
}

double MetersToFeet(double meters) {
    return meters * MtoF;
}

double FeetToInches(double feet) {
    return feet * 12.0; 
}

#include <iostream>
#include <windows.h>
#include <unistd.h>

using namespace std;

void sleep(int seconds) {
    Sleep(seconds * 1000);
}

void sleep(const char* seconds) {
    Sleep(atoi(seconds) * 1000);
}

int main() {
    SetConsoleOutputCP(65001);
    cout << "Спимо 10 секунд..." << endl;
    sleep(10);
    cout << "Проспали 10 секунд." << endl;

    cout << "Спимо 5 секунд..." << endl;
    sleep("5");
    cout << "Проспали 5 секунд." << endl;

    return 0;
}
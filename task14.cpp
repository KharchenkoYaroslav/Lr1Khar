#include <iostream>
#include <windows.h>

using namespace std;

class stopwatch {
    LARGE_INTEGER start;
    LARGE_INTEGER end;
    LARGE_INTEGER frequency;
    LARGE_INTEGER creation_time;

public:
    stopwatch();
    ~stopwatch();
    void Start();
    void Stop();
    void Show();
};

stopwatch::stopwatch() {
    QueryPerformanceFrequency(&frequency);
    QueryPerformanceCounter(&creation_time); // Записуємо час створення об'єкта
    start.QuadPart = 0;
    end.QuadPart = 0;
}

stopwatch::~stopwatch() {
    LARGE_INTEGER current_time;
    QueryPerformanceCounter(&current_time); // Отримуємо поточний час
    LARGE_INTEGER elapsed;
    elapsed.QuadPart = current_time.QuadPart - creation_time.QuadPart; // Обчислюємо різницю між поточним часом та часом створення
    double elapsed_seconds = static_cast<double>(elapsed.QuadPart) / frequency.QuadPart;
    cout << "Пройшло часу зі створення об'єкта: " << elapsed_seconds << " секунд\n";
}

void stopwatch::Start() {
    QueryPerformanceCounter(&start);
}

void stopwatch::Stop() {
    QueryPerformanceCounter(&end);
}

void stopwatch::Show() {
    LARGE_INTEGER elapsed;
    elapsed.QuadPart = end.QuadPart - start.QuadPart;
    double elapsed_seconds = static_cast<double>(elapsed.QuadPart) / frequency.QuadPart;
    cout << "Пройшло часу зі старту: " << elapsed_seconds << " секунд\n";
}

int main() {
    SetConsoleOutputCP(65001);
    stopwatch ob;

    char c;
    cout << "Введіть щось щоб почати таймер: ";
    cin >> c;
    ob.Start();
    cout << "Введіть щось щоб зупинити таймер: ";
    cin >> c;
    ob.Stop();
    ob.Show();

    return 0;
}
#include <iostream>
#include <time.h>

using namespace std;

class stopwatch {
    timespec start;
    timespec end;
    timespec creation_time;

public:
    stopwatch();
    ~stopwatch();
    void Start();
    void Stop();
    void Show();
};

stopwatch::stopwatch() {
    clock_gettime(CLOCK_MONOTONIC, &creation_time);
    start.tv_sec = 0;
    end.tv_sec = 0;
}

stopwatch::~stopwatch() {
    timespec current_time;
    clock_gettime(CLOCK_MONOTONIC, &current_time);
    double elapsed_seconds = current_time.tv_sec - creation_time.tv_sec;
    cout << "Пройшло часу зі створення об'єкта: " << elapsed_seconds << " секунд\n";
}

void stopwatch::Start() {
    clock_gettime(CLOCK_MONOTONIC, &start);
}

void stopwatch::Stop() {
    clock_gettime(CLOCK_MONOTONIC, &end);
}

void stopwatch::Show() {
    double elapsed_seconds = end.tv_sec - start.tv_sec;
    cout << "Пройшло часу зі старту: " << elapsed_seconds << " секунд\n";
}

int main() {
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
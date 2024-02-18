#include <iostream>
#include <ctime>
#include <iomanip>
#include <windows.h>

using namespace std;

class time_and_date
{
private:
    time_t current_time;

public:
    time_and_date();
    void Print();
};
time_and_date::time_and_date()
{
    current_time = time(nullptr);
}

void time_and_date::Print()
{
    tm *local_time = localtime(&current_time);
    cout << "Актуальна дата та час: " << put_time(local_time, "%c") << endl;
}

int main()
{
    SetConsoleOutputCP(65001);
    time_and_date current_time_date;
    current_time_date.Print();
    return 0;
}
#include <iostream>
#include <ctime> 
#include <windows.h>

using namespace std;
class stopwatch
{
    clock_t start;
    clock_t end;
public:
    stopwatch(); 
    ~stopwatch(); 
    void Start();
    void Stop();
    void Show();
};
stopwatch:: stopwatch()
{
    start = 0;
    end = 0;
}
stopwatch :: ~stopwatch()
{
    cout << "Пройшло часу зі створення об'єкта: " << clock() / CLOCKS_PER_SEC << " секунд\n";
}
void stopwatch :: Start(){
    start = clock();
}
void stopwatch :: Stop(){
    end = clock();
}
void stopwatch :: Show(){
    cout << "Пройшло часу зі старту: " << (end - start) / CLOCKS_PER_SEC << " секунд\n";
}

int main()
{
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
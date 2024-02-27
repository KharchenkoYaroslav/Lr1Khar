#include <iostream>
#include <windows.h>

using namespace std;
class mybox
{
private:
    double x;
    double y;
    double z;
    double volume;

public:
    mybox(double x, double y, double z);
    void Volume();
};
mybox::mybox(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
    volume = x * y * z;
}
void mybox::Volume()
{
    cout << "Об'єм паралелепіпеда: " << volume << endl;
}

int main()
{
    SetConsoleOutputCP(65001);
    mybox box1(2.5, 3.6, 4.2);

    box1.Volume();

    return 0;
}
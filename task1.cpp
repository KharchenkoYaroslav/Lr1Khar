#include <iostream>
#include <windows.h>
#include <cmath>
#include <vector>

using namespace std;

class Employee
{
    double rate;
    int hours;
    double salary;
    static double totalSalary;
public:
    Employee(double rate, int hours);
    Employee(double salary);
    static double getTotalSalary();
};

double Employee::totalSalary = 0;

Employee::Employee(double rate, int hours)
{
    rate = rate;
    hours = hours;
    salary = rate * hours;
    totalSalary += salary;
}

Employee::Employee(double salary)
{
    salary = salary;
    totalSalary += salary;
}

double Employee::getTotalSalary()
{
    return totalSalary;
}

int main()
{
    SetConsoleOutputCP(65001);
    double rate;
    int hours;
    int count;
    char quick;
    double salary;

    cout << "Вводити одразу зарплату?(Y/N): ";
    cin >> quick;

    cout << "Введіть кількість працівників: ";
    cin >> count;

    vector<Employee> employees;

    for (int i = 1; i <= count; i++)
    {
        if (quick == 'Y')
        {
            cout << "Введіть зарплату працівника " << i << ": ";
            cin >> salary;
            salary = abs(round(salary * 100) / 100);
            employees.push_back(Employee(salary));
        }
        else
        {
            cout << "Введіть ставку на годику та кількість відпрацьованих годин працівника " << i << ": ";
            cin >> rate >> hours;
            employees.push_back(Employee(abs(rate), abs(hours)));
        }
    }

    cout << "Сумарна зарплата: " << Employee::getTotalSalary();
    return 0;
}
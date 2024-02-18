#include <iostream>
#include <cstdlib> 

using namespace std;
/*
int myFunction(const char *s);
long myFunction(const char *s);
double myFunction(const char *s);
*/
int main() {
    //Відповідь: бо в ці функції передається однакова кількість елементів однакового типу
    const char *str = "123";
/*
    int num = myFunction(str);
    long longNum = myFunction(str);
    double dbl = myFunction(str);

    cout << "Number: " << num << endl;
    cout << "Long: " << longNum << endl;
    cout << "Double: " << dbl << endl;
*/
    return 0;
}
/*
int myFunction(const char *s) {
    cout << "Custom atoi called" << endl;
    return atoi(s);
}


long myFunction(const char *s) {
    cout << "Custom atol called" << endl;
    return atol(s);
}


double myFunction(const char *s) {
    cout << "Custom atof called" << endl;
    return atof(s);
}
*/
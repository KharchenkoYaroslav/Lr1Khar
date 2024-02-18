#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    cout << argv[argc - 1] << endl // Виводимо останній аргумент командного рядка(бо argc - кількість елементів) а argv масив елементів
         << argc[argv - 1] << endl; // По суті повна несенітниця але компілятор якось порішав
    return EXIT_SUCCESS;
}
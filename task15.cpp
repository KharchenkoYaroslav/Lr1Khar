#include <iostream>
#include <cstring>
#include <cstdlib>

#define SIZE 255

using namespace std;

class strtype
{
    char *p;
    int len;

public:
    strtype(const char *ptr);
    ~strtype();
    void Show();
};
strtype::strtype(const char *ptr)
{
    p=(char *) malloc(SIZE);
    strcpy(p, ptr);
    len = strlen(p);
}

strtype::~strtype()
{
    cout << "Freeing p\n";
    free(p);
}
void strtype::Show() {
cout << p << " - length : " << len << endl;
cout << "\0";
}
int main()
{
    strtype s1(" This is a test ."), s2("I like C++. ");
    s1.Show();
    s2.Show();
    return 0;
}
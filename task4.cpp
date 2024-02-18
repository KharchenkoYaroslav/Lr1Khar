#include <iostream>
#include <windows.h>

using namespace std;
class card{
    const char *name;
    const char *author;
    int count;
    public:
    void Store(const char *name, const char *author, int count);
    void Show();
};

void card :: Store(const char *name, const char *author, int count){
    this->name = name;
    this->author = author;
    this->count = count;
}
void card :: Show(){
    SetConsoleOutputCP(65001);
    cout << "Назва: " << name << endl;
    cout << "Автор: " << author << endl;
    cout << "Кількість: " << count << endl;
}

int main()
{
    SetConsoleOutputCP(65001);

    card myCard;
    myCard.Store("Назва", "Автор", 10);
    myCard.Show();

    return 0;
}

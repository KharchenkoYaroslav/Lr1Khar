#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

class Stack {
    char* stck; 
    int tos; 
    int size; 
public:
    Stack(int size); 
    ~Stack(); 
    void push(char ch); 
    char pop(); 
};


Stack::Stack(int size) {
    cout << "Створюємо стек\n";
    this->size = size;
    stck = (char*)malloc(size);
    tos = 0; 
}


Stack::~Stack() {
    free(stck); 
}


void Stack::push(char ch) {
    if (tos == size) {
        cout << "Стек повний\n";
        return;
    }
    stck[tos] = ch;
    tos++;
}


char Stack::pop() {
    if (tos == 0) {
        cout << "Стек порожній\n";
        return 0;
    }
    tos--;
    return stck[tos];
}

int main() {
    SetConsoleOutputCP(65001);

    Stack s1(2), s2(3);
    int i;

    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    for (i = 0; i < 3; i++) {
        cout << "Витягнути з s1: " << s1.pop() << "\n";
    }
    for (i = 0; i < 3; i++) {
        cout << "Витягнути з s2: " << s2.pop() << "\n";
    }

    return 0;
}
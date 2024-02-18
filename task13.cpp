#include <iostream>
#include <windows.h>

using namespace std;

void rev_str(string& str) {
    string temp = str;
    str = ""; 
    for(int i = temp.length() - 1; i >= 0; i--){
        str += temp[i];
    }
}
void rev_str(string& str1, string& str2) {
    str2 = str1;
    rev_str(str2);
}

int main() {
    SetConsoleOutputCP(65001);
    string str1 = "Hello";
    string str2;

    rev_str(str1);
    cout << "Перевернутий рядок: " << str1 << endl;

    rev_str(str1, str2);
    cout << "Перевернутий рядок: "<< str2 <<" рядка: " << str1 << endl;

    return 0;
}
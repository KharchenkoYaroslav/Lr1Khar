#include <iostream>
using namespace std;

#define SIZE 100

class q_type
{
    int queue[SIZE]; // містить чергу
    int head, tail;  // індекс вершини і хвоста
public:
    q_type();        // конструктор
    void init();     // ініціалізація
    void q(int num); // запам’ятовування
    int deq();       // відновлення
};
q_type::q_type()
{
    init();
}
// ініціалізація
void q_type::init()
{
    head = tail = 0;
}

// запам’ятовування
void q_type::q(int num)
{
    if (tail == SIZE)
    {
        cout << "Queue is full\n";
        return;
    }
    queue[tail] = num;
    tail++;
}

// відновлення
int q_type::deq()
{
    if (head == tail)
    {
        cout << "Queue is empty\n";
        return -1;
    }
    int num = queue[head];
    head++;
    return num;
}

int main()
{
    q_type q1;

    for (int i = 0; i < 10; i++)
    {
        q1.q(i);
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "Dequeue: " << q1.deq() << endl;
    }

    return 0;
}
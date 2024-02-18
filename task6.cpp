#include <iostream>
using namespace std;

struct Node
{
    const char* name;
    int value;
    Node *next;
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList();
    void addFront(const char* name, int value);
    void addEnd(const char* name, int value);
    void display();
};

LinkedList::LinkedList()
{
    head = NULL;
}

void LinkedList::addFront(const char* name, int value)
{
    Node *newNode = new Node{name, value, head};
    head = newNode;
}

void LinkedList::addEnd(const char* name, int value)
{
    Node *newNode = new Node{name, value, NULL};
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

void LinkedList::display()
{
    Node *current = head;
    while (current != NULL)
    {
        cout << "Name: " << current->name << ", Value: " << current->value << endl;
        current = current->next;
    }
}

int main()
{
    LinkedList list;
    list.addEnd("one", 10);
    list.addEnd("two", 20);
    list.addEnd("three", 30);
    list.addFront("four", 40);
    list.display();
    return 0;
}
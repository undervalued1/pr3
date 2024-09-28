

#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int value) :
        data(value),
        next(nullptr),
        prev(nullptr) {

    }
};
class DoublyLinkedList {
public:
    
    Node* head;
    Node* tail;
public:

    DoublyLinkedList() : head(nullptr), tail(nullptr){}
    void push_front(int value)//Добавленине в начало списка
    {
        Node* node = new Node(value);
        node->next = head;
        if (head != nullptr)
        {
            head->prev;
        }
        if (tail == nullptr)
        {
            tail = node;
        }
        head = node;
    }
    void push_back(int value)//Добавление в конец списка
    {
        Node* node = new Node(value);
        node->prev = tail;
        if (head != nullptr)
        {
            tail->prev;
        }
        if (head == nullptr)
        {
            head = node;
        }
        tail = node;
    }
    void pop_front()//Удаление с начала списка
    {
        Node* node = head;
        head->next = head;
        head->prev = nullptr;
        if (node != nullptr)
        {
            node->prev = nullptr;
        }
        if (node == nullptr)
        {
            head = nullptr;
        }
    }
    void pop_back()//Удаление с конца списка
    {
        Node* node=tail;
        tail->prev = tail;
        tail->next = nullptr;
        if (node != nullptr)
        {
            node->next = nullptr;
        }
        if (node == nullptr)
        {
            tail = nullptr;
        }
    }
    void display()
    {
        Node* node = head;
        cout << head->data;
        node = head;
        while (head->next != nullptr)
        {
            node = node->next;
            cout << endl << node->data << endl;
        }
    }
    void sort()
    {

    }
    void remove_duplicates()
    {

    }
    void exit()
    {

    }
};
int main()
{
    setlocale(LC_ALL, "Russian");
    DoublyLinkedList trum;
    while(true)
    {
        cout << "\nМЕНЮ:" << endl;
        cout << "1.Добавить элемент в начало.\n2.Добавить элемент в конец.\n"
            << "3.Удалить элемент с начала.\n4.Удалить элемент с конца.\n"
            << "5.Отобразить список.\n6.Сортировать список.\n7.Удалить дубликаты.\n8.Удаление дубликатов.\n9.Выход." << endl;
        cout << "Введите номер команды: ";

        int a;
        cin >> a;
        if (a <= 0 || a > 8)
        {
            cout << "Введено некоректое значение." << endl;
        }
        switch (a)
        {
        case 1: {
            int value;
            cout << "Введите элемент который хотите добавить: ";
            cin >> value;
            trum.push_front(value);
            break;
        }
        case 2: {
            int value;
            cout << "Введите элемент который хотите добавить: ";
            cin >> value;
            trum.push_back(value);
            break;
        }
        case 3: {
            cout << "Удаление элемента из начала списка";
            trum.pop_front();
            break;
        }
        case 4: {
            cout << "Удаление элемента из конца списка";
            trum.pop_back();
            break;
        }
        case 5: {
            trum.display();
        }
        case 6: {

        }
        case 7: {

        }
        case 8: {


        }
        case 9: {
            return 0;
        }
        }
    }
}


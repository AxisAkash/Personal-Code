#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

class SinglyLinkedList
{
private:
    Node* head;

public:
    SinglyLinkedList()
    {
        head = nullptr;
    }

    void insertAtEnd(int value)
    {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node* temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void display()
    {
        if (head == nullptr)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = head;
        cout << "Linked List: ";
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insertAtPosition(int value, int position)
    {
        Node* newNode = new Node();
        newNode->data = value;

        if (position == 1)
        {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;
        for (int i = 1; i < position - 1 && temp != nullptr; ++i)
        {
            temp = temp->next;
        }

        if (temp == nullptr)
        {
            cout << "Invalid position." << endl;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    bool search(int key)
    {
        Node* temp = head;
        while (temp != nullptr)
        {
            if (temp->data == key)
                return true;
            temp = temp->next;
        }
        return false;
    }
};

int main()
{
    SinglyLinkedList myList;

    myList.insertAtEnd(10);
    myList.insertAtEnd(20);
    myList.insertAtEnd(30);
    myList.insertAtEnd(40);

    myList.display();

    myList.insertAtPosition(25, 3);

    myList.display();

    int searchKey = 980;
    if (myList.search(searchKey))
        cout << searchKey << " found in the list." << endl;
    else
        cout << searchKey << " not found in the list." << endl;

    return 0;
}


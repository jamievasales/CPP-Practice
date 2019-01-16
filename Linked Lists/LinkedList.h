#include <iostream>


using namespace std;

class Node {
    public:
    int data;
    Node *next;
};

class LinkedList {
    public:
    Node *head, *tail;
    LinkedList() {
        head=nullptr;
        tail=nullptr;
    }

    void insertData(int data);

    void printList();

    void deleteFromData(int);


};

void LinkedList::insertData(int data) {
    if (head==nullptr) {
        head = new Node();
        head->data = data;
        head->next = nullptr;
        tail = head;
    }
    else {
        Node *temp = new Node();
        temp->data = data;
        tail->next = temp;
        tail = temp;
    }
}

void LinkedList::printList() {
    Node *current = new Node();
    current = head;
    while(current) {
        cout<<current->data<<",";
        current = current->next;
    }
    cout<<endl;
}

void LinkedList::deleteFromData(int data) {
    Node *current = new Node();
    Node *previous = new Node();
    current = head;
    if (current->data == data) {
            head = head->next;
        }
    else

    while(current!=nullptr) {

        if(current == tail && current->data == data) {
            delete tail;
            tail = previous;
            tail->next = nullptr;
            return;
        }

            if (current->next->data == data) {
                //temp = current->next;
                // if(current->next!= nullptr) {
                previous = current;
                //current = current->next;
                delete current->next;
                current-> next = current->next->next;
                // }
                // else {
                //     current->next = nullptr;
                //     tail=current;
                // }
            }

        if(current!=nullptr)
        current = current->next;
    }

}
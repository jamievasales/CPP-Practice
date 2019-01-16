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

    void display()
  {
    Node *temp=new Node;
    temp=head;
    while(temp!=nullptr)
    {
      cout<<temp->data<<"\t";
      temp=temp->next;
    }
  } 


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
    current = this->head;
    while(current) {
        cout<<current->data<<",";
        current = current->next;
    }
    cout<<endl;
}
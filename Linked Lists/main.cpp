#include <stdio.h>
#include <string.h>
#include <iostream>

#include "LinkedList.h"

using namespace std;

int main() {
        LinkedList* linkedlist = new LinkedList();
        linkedlist->insertData(36);
        linkedlist->insertData(72);
        linkedlist->insertData(108);
        linkedlist->insertData(108);

        linkedlist->printList();
        linkedlist->deleteFromData(108);
        linkedlist->deleteFromData(36);
        linkedlist->printList();
        linkedlist->insertData(5);
        linkedlist->printList();
        return 0;
}
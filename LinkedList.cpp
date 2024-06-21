// Chelsea Vanianindya Putri - 1313623026 - Ilmu Komputer 2023 A


#include <iostream>
using namespace std;

struct node {
    int data;
    struct node* next;
};

struct node* head;

void insert(int data) { //new element at the first position
    node* temp = new node();
    temp -> data = data;
    temp -> next = head;
    head = temp;
}

void printOut(node* head) {
    node* temp = head;
    cout << "List: ";
    //traverse the list
    while (temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    // cout << "\n";
}



int main() {
    insert(1);
    insert(3);
    insert(5);
    insert(7);
    printOut(head);

    return 0;
}
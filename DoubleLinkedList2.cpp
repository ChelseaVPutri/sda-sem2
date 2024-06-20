#include "DoubleLinkedList.h"
#include <iostream>
using namespace std;

DoubleNode::DoubleNode() {
    value = 0;
    prev = nullptr;
    next = nullptr;
}

DoubleNode::DoubleNode(int element) {
    value = element;
    prev = nullptr;
    next = nullptr;
}

DoubleNode::DoubleNode(int element, DoubleNode *prevNode, DoubleNode *nextNode) {
    value = element;
    prev = prevNode;
    next = nextNode;
}

void DoubleNode::setValue(int element) {
    value = element;
}

void DoubleNode::setPrev(DoubleNode *prevNode) {
    prev = prevNode;
}

void DoubleNode::setNext(DoubleNode *nextNode) {
    next = nextNode;
}

int DoubleNode::getValue() {
    return value;
}

DoubleNode* DoubleNode::getPrev() {
    return prev;
}

DoubleNode* DoubleNode::getNext() {
    return next;
}

DoubleLinkedList::DoubleLinkedList() {
    head = nullptr;
    tail = nullptr;
}

DoubleLinkedList::DoubleLinkedList(DoubleNode *headNode, DoubleNode *tailNode) {
    head = headNode;
    tail = tailNode;
}

void DoubleLinkedList::addFirst(int element) {
    DoubleNode* newNode = new DoubleNode(element);
    newNode->setNext(head);
    //newNode->setPrev(nullptr);
    head->setPrev(newNode);
    if (head->getNext() == nullptr) {
        //head = tail;
        tail = head;
    }
    head = newNode;
}

void DoubleLinkedList::addLast(int element) {
    DoubleNode* newNode = new DoubleNode(element);
    newNode->setPrev(tail);
    //newNode->setNext(nullptr);
    tail->setNext(newNode);
    tail = newNode;
}

int DoubleLinkedList::delFirst() {
    int elementDeletion = head->getValue();
    DoubleNode *temp = head;
    head = head->getNext();
    delete temp;
    return elementDeletion;
}

int DoubleLinkedList::delLast() {
    int elementDeletion = tail->getValue();
    DoubleNode *temp = tail;
    tail = tail->getPrev();
    delete temp;
    return elementDeletion;
}

DoubleLinkedList::~DoubleLinkedList() {
    while (head != nullptr) {
        delFirst();
    }
}

void DoubleLinkedList::printList() {
    DoubleNode *temp = head;
    // if (head != nullptr) {
    //     cout << "List empty";
    // }
    while (temp != nullptr) {
        cout << temp->getValue() << " ";
        temp = temp->getNext();
    }
}

int main() {
    DoubleNode *A = new DoubleNode();
    DoubleLinkedList list = DoubleLinkedList(A,A);
    list.addFirst(1);
    list.addFirst(10);
    list.addLast(100);
    list.printList();
}

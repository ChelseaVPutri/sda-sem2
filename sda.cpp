#include "sda.h"
using namespace std;

Node::Node() {
    val = 0;
    next = nullptr;
}

Node::Node(int value) {
    val = value;
    next = nullptr;
}

Node::Node(int value, Node* nextNode) {
    val = value;
    next = nextNode;
}

void Node::setValue(int value) {
    val = value;
}

void Node::setNext(Node* nextNode) {
    next = nextNode;
}

int Node::getValue() {
    return val;
}

Node* Node::getNext() {
    return next;
}

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(Node* headList) {
    head = headList;
}

void LinkedList::addFirst(int value) {
    Node* newNode = new Node(value);
    newNode->setNext(head);
    head = newNode;
}

int LinkedList::delFirst() {
    int res = head->getValue();
    Node* buf = head;
    head = head->getNext();
    delete buf;
    return res;
}

LinkedList::~LinkedList() {
    while(head != nullptr) {
        delFirst();
    }
}

string LinkedList::to_string() {
    Node* now = head;
    string result = "[";

    while(now != nullptr) {
        result.append(std::to_string(now->getValue()));
        result.append(", ");
        now = now->getNext();
    }
    result.pop_back();
    result.pop_back();
    result.append("]");

    return result;
}
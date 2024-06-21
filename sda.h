#include <string>

class Node {
private:
    int val;
    Node* next;
    
public:
    Node();
    Node(int);
    Node(int, Node*);
    void setValue(int);
    void setNext(Node*);
    int getValue();
    Node* getNext();
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList();
    LinkedList(Node*);
    void addFirst(int);
    int delFirst();
    ~LinkedList();
    std::string to_string();
};
/*
class DoublyNode {
private:
    int val;
    DoublyNode *prev, *next;
public:
    DoublyNode();
    DoublyNode(int);
    DoublyNode(int, DoublyNode*, DoublyNode*);
    void setValue(int);
    void setPrev(DoublyNode*);
    void setNext(DoublyNode*);
    int getValue();
    DoublyNode* getPrev();
    DoublyNode* getNext();
};

class DoublyLinkedList {
private:
    DoublyNode *head, *last;
public:
    DoublyLinkedList();
    DoublyLinkedList(DoublyNode*, DoublyNode*);
    void addFirst(int);
    void addLast(int);
    int delFirst();
    int delLast();
    ~DoublyLinkedList();
    std::string to_string();
};
*/
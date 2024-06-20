#include <string>
#include <iostream>

class DoubleNode {
    private:
        int value;
        DoubleNode *prev, *next;

    public:
        DoubleNode();
        DoubleNode(int);
        DoubleNode(int, DoubleNode*, DoubleNode*);
        void setValue(int element);
        void setPrev(DoubleNode*);
        void setNext(DoubleNode*);
        int getValue();
        DoubleNode* getPrev();
        DoubleNode* getNext();

};

class DoubleLinkedList {
    private:
        DoubleNode *head, *tail;
    
    public:
        DoubleLinkedList();
        DoubleLinkedList(DoubleNode*, DoubleNode*);
        void addFirst(int); //push
        void addLast(int); //append
        int delFirst(); //pop
        int delLast();
        ~DoubleLinkedList();
        //std::string to_string();
        void printList();

};
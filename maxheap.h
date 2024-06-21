#include <iostream>
#include <string>
#include <vector>

//pake class biasa
class MaxHeap {
    private:
        int* heap; //node
        int size;
        int maxSize;

        int parent(int);
        int leftChild(int);
        int rightChild(int);
        bool isLeaf(int);
        void swap(int, int);
        void MaxHeapify(int);

    public:
        MaxHeap(int);
        void insert(int);
        int extractMax(); //delete
        std::string toString();
        ~MaxHeap();
};

//pake vector
template <class node> class MinHeap {
    private:
        node* heap;
        int size;
        int maxSize;

        int parent(int);
        int leftChild(int);
        int rightChild (int);
        bool isLeaf(int);
        void swap(int, int);

    public:
        MinHeap(int);
        int getSize();
        void insert(node);
        node extractMin();
        void print();
        bool isEmpty();
        ~MinHeap();
};
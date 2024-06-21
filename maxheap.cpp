#include "maxheap.h"

MaxHeap::MaxHeap(int maxSize) {
    heap = new int[maxSize]; //bikin node
    size = 0;
    maxSize = maxSize;
};

int MaxHeap::parent(int index) {
    return (index - 1) / 2;
}

int MaxHeap::leftChild(int index) {
    return (2 * index) + 1;
}

int MaxHeap::rightChild(int index) {
    return (2 * index) + 2;
}

bool MaxHeap::isLeaf(int index) {
    return (index >= (size / 2) && index <= size);
}

void MaxHeap::MaxHeapify(int index) {
    if (isLeaf(index)) {
        return;
    }

    int max = index;
    if (heap[max] < heap[leftChild(index)]) {
        max = leftChild(index);
    }

    if (heap[max] < heap[rightChild(index)]) {
        max = rightChild(index);
    }

    if (max != index) {
        swap(index, max);
        MaxHeapify(max);
    }
}

void MaxHeap::swap(int index1, int index2) {
    int temp = heap[index1];
    heap[index1] = heap [index2];
    heap[index2] = temp;
}

void MaxHeap::insert(int value) {
    if (maxSize == size) {
        std::cout << "max size reached. cant insert " << value << '\n';
        return;
    }

    heap[size] = value;

    int current = size;
    while (heap[current] > heap[parent(current)]) {
        swap(current, parent(current));
        current = parent(current);
    }
    size++;
}

int MaxHeap::extractMax() {
    if (size==0) {
        return 0;
    }

    int popped = heap[0];
    if (size==1) {
        size--;
        return popped;
    }

    heap[0] = heap[size--];
    MaxHeapify(0);
    return popped;
}

std::string MaxHeap::toString() {
    std::string s = "[";
    for (int i = 0; i < size; i++) {
        s.append(std::to_string(heap[i]));
        s.append(", ");
    }
    s.pop_back();
    s.pop_back();
    s.append("]");
    return s;
}

MaxHeap::~MaxHeap() {
    delete heap;
}

int main() {
    MaxHeap heap1(5);
    heap1.insert(1);
    heap1.insert(9);
    heap1.insert(10);
    heap1.insert(7);
    heap1.extractMax();
    heap1.toString();
}
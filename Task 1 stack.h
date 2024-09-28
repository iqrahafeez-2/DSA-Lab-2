#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <cstdlib>

template <class ItemType>
class Stack {
private:
    int top;
    int maxStack;
    ItemType* items;
public:
    Stack() : top(-1), maxStack(500) {
        items = new ItemType[maxStack];
    }

    Stack(int max) : top(-1), maxStack(max) {
        items = new ItemType[maxStack];
    }

    ~Stack() {
        delete[] items;
    }

    int IsEmpty() const {
        return (top == -1);
    }

    int IsFull() const {
        return (top == maxStack - 1);
    }

    void Push(ItemType newItem) {
        if (IsFull()) {
            std::cout << "Stack Overflow" << std::endl;
            std::exit(1);
        }
        top++;
        items[top] = newItem;
    }

    void Pop(ItemType& item) {
        if (IsEmpty()) {
            std::cout << "Stack Underflow" << std::endl;
            std::exit(1);
        }
        item = items[top];
        top--;
    }
};

#endif

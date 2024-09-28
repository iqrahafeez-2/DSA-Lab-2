#include "stack.h"

int main() {
    Stack<int> IntStack;
    Stack<float> FloatStack;

    int data;
    float val;

    IntStack.Push(35);
    FloatStack.Push(3.1415927f);

    IntStack.Pop(data);
    std::cout << data << std::endl;

    FloatStack.Pop(val);
    std::cout << val << std::endl;

    return 0;
}

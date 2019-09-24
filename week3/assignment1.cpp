#include <iostream>
void func();
int main() {
    void (*code)() = func;
    const int rodata= 8;
    static int data = 5;
    static int bss;
    int* heap = new int[2];
    int stack = 7;


    std::cout << "code\t" << (void*) code << std::endl;
    std::cout << "Rodata\t" << (void*) rodata <<std::endl;
    std::cout << "data\t" << (void*) &data << std::endl;
    std::cout << "BSS\t" << &bss << std::endl;
    std::cout << "HEAP\t" << heap << std::endl;
    std::cout << "Stack\t" << &stack << std::endl;
    return 0;
}
void func() {

}

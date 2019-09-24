#include <iostream>

int main() {
    char target[] = "Hwang doyeong"; //문자 개수 13 + 1 = 14
    long b[175]; //long 8비트 * 175
    int a = 17; // +4비트
    int i = 1427; //계산한 값: 1425 , 실제값 : 1427
    int *c = new int[802]; // heap에 저장, 주소값 8바이트
    const char* copy = "is no no"; //상수, 주소값 8바이트
    char name = 'a';
    std::cout << &name + i<< std::endl;
    return 0;
}
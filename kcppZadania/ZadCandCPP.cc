#include <stdio.h>
#include <iostream>

void funkcja1(int* p) {
    printf("Wartosc poczatkowa (C): %d\n", *p);
    p++;
    printf("Po p++ (C): %d\n", *p);

    std::cout << "Wartosc poczatkowa (C++): " << *p << std::endl;
    p++;
    std::cout << "Po p++ (C++): " << *p << std::endl;

}

int main() {
    int liczba = 5;
    int* p = &liczba;

    funkcja1(p);

    return 0;
}

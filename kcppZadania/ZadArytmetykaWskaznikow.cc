#include <iostream>

using namespace std;

void Funkcja1() {
    int liczba = 5;
    int* p = &liczba;

    cout << "Wartosc poczatkowa: " << *p << endl;

    p++;
    //Inkrementuje wskaźnik o jeden, wskaźnik przesuwa się do następnego miejsca w pamięci
    cout << "Po p++: " << *p << endl;
    //Inkrementuje wskaźnik o jeden, wskaźnik przesuwa się do następnego miejsca w pamięci
    ++p;
    cout << "Po ++p: " << *p << endl;
    //Inkrementuje wartość na którą wskazuje wskaźnik o 1.
    ++*p;
    cout << "Po ++*p: " << *p << endl;
    //Inkrementuje wartość na którą wskazuje wskaźnik o 1.
    ++(*p);
    cout << "Po ++(*p): " << *p << endl;
    //Inkrementuje wartość na którą wskazuje wskaźnik o 1.
    ++*(p);
    cout << "Po ++*(p): " << *p << endl;

    *p++;
    cout << "Po *p++: " << *p << endl;

    (*p)++;
    cout << "Po (*p)++: " << *p << endl;
}

int main() {
    Funkcja1();
    return 0;
}
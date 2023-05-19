#include <iostream>
using namespace std;

int main(){
    int zmienna = 7;
    int *wskaznik;

    wskaznik = &zmienna;
    *wskaznik = 7;
    cout << wskaznik << endl;
    cout << *wskaznik << endl;
    cout << &wskaznik << endl;



    return 1;
}
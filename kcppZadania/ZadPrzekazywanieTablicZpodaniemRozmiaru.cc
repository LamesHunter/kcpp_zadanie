#include <iostream>

using namespace std;

void tablica(int tab[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}

int main() {
    int tab1[] = {1, 2, 3};
    int tab2[] = {4, 5, 6, 7};

    int rozmiar1 = sizeof(tab1) / sizeof(tab1[0]);
    int rozmiar2 = sizeof(tab2) / sizeof(tab2[0]);

    tablica(tab1, rozmiar1);
    tablica(tab2, rozmiar2);

    return 0;
}

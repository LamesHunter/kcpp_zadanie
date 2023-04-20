#include <iostream>

using namespace std;

void modyfikujTablice(int tablica[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        tablica[i] += 1;
    }
}

void wypiszTablice(int tablica[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;
}

int main() {
    int mojaTablica[] = {1, 2, 3, 4, 5};
    int rozmiar = 5;

    int kopiaTablicy[rozmiar];

    // skopiuj tablicę mojaTablica do tablicy kopiaTablicy
    for (int i = 0; i < rozmiar; i++) {
        kopiaTablicy[i] = mojaTablica[i];
    }

    // zmodyfikuj oryginalną tablicę
    modyfikujTablice(mojaTablica, rozmiar);

    // wyświetl obie tablice
    cout << "Oryginalna tablica: ";
    wypiszTablice(kopiaTablicy, rozmiar);

    cout << "Zmodyfikowana tablica: ";
    wypiszTablice(mojaTablica, rozmiar);

    return 0;
}

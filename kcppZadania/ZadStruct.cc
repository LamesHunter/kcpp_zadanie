#include <iostream>
#include <string>

using namespace std;

struct Osoba {
    string imie;
    int wiek;
    double wzrost;
};

void wypiszOsobe(const Osoba& osoba) {
    cout << "Imie: " << osoba.imie << endl;
    cout << "Wiek: " << osoba.wiek << endl;
    cout << "Wzrost: " << osoba.wzrost << endl;
}

int main() {
    Osoba pierwszaOsoba;
    pierwszaOsoba.imie = "Jan";
    pierwszaOsoba.wiek = 30;
    pierwszaOsoba.wzrost = 180.5;

    Osoba drugaOsoba = {"Anna", 25, 165.7};

    wypiszOsobe(pierwszaOsoba);
    cout << endl;
    wypiszOsobe(drugaOsoba);

    return 0;
}

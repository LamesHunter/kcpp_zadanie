#include <iostream>

class MojaKlasa {
public:
    int publicznaZmienna;

    void metodaPubliczna() {
        std::cout << "Metoda publiczna" << std::endl;
    }

    void metodaPubliczna2();

protected:
    int chronionaZmienna;

    void metodaChroniona() {
        std::cout << "Metoda chroniona" << std::endl;
    }

private:
    int prywatnaZmienna;

    void metodaPrywatna() {
        std::cout << "Metoda prywatna" << std::endl;
    }
};

void MojaKlasa::metodaPubliczna2() {
    std::cout << "Druga metoda publiczna" << std::endl;
}

int main() {
    MojaKlasa obiekt;
    obiekt.publicznaZmienna = 5;
    obiekt.metodaPubliczna();

    obiekt.metodaPubliczna2();

    //obiekt.chronionaZmienna = 10; // błąd - chronionaZmienna jest chroniona
    // obiekt.metodaChroniona(); // błąd - metodaChroniona jest chroniona

    // obiekt.prywatnaZmienna = 15; // błąd - prywatnaZmienna jest prywatna
    // obiekt.metodaPrywatna(); // błąd - metodaPrywatna jest prywatna

    return 0;
}

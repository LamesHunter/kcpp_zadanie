#include <iostream>

using namespace std;

#define PLUSDWA(a) (a + 2)
#define LICZBA 12
#define STRING(str) #str
#define POLACZ(str1, str2) str1 ## str2

int plusDwa(int a)
{
    return a + 2;
}

int main()
{
#ifdef PLUSDWA
    cout << "Makro:" << PLUSDWA(LICZBA) << endl;
#endif

#ifndef PLUSDWA
    cout << "Funckja:  " << plusDwa(LICZBA) << endl;
#endif

    cout << " Wykorzystanie makra z #: " << STRING('a') << endl;
    cout << " Wykorzystanie makra z ##: " << POLACZ("ale", "jaja") << endl;

    return 0;
}
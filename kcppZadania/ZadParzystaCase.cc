#include <iostream>

using namespace std;

bool czyParzystaBitowo(int a)
{
    return (!(a & 1));
}

bool czyParzystaModulo(int a)
{
    return a % 2 == 0;
}

bool czyParzystaWarunkowa(int a)
{
    if(a % 2 == 0)
    {
        return true;
    }else{
        return false;
    }
}

int main()
{
    cout << "Wprowadz liczbe" << endl;
    int x, liczba;
    cin >> x;
    cout << " Wybierz liczbe: 1. bitowo, 2. modulo, 3. warunkowo" << endl;
    cin >> liczba;

    switch (liczba)
    {
    case 1:
        cout << " Bitowo: " << czyParzystaBitowo(x) << endl;
        break;

    case 2:
        cout << " Modulo: " << czyParzystaModulo(x) << endl;
        break;

    case 3:
        cout << " Warunkowo: " << czyParzystaWarunkowa(x) << endl;
        break;

    default:
        cout << "Zla liczba" << endl;
        break;
    }

    return 0;
}
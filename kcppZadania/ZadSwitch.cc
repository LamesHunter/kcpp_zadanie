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

enum Opcje {
        zle,
        bitowo,
        modulo,
        warunkowo
    };

Opcje resolveOption(std::string input)
     {
    if( input == "bitowo" ) return bitowo;
    if( input == "modulo" ) return modulo;
    if( input == "warunkowo" ) return warunkowo;
    return zle;
    }

int main()
{
    cout << "Wprowadz liczbe" << endl;
    int x;
    string opcja;
    cin >> x;
    cout << " Wybierz opcje wpisujac nazwe opcji: 1. bitowo, 2. modulo, 3. warunkowo" << endl;
    cin >> opcja;

    

    
    switch (resolveOption(opcja))
    {
    case bitowo:
        cout << " Bitowo: " << czyParzystaBitowo(x) << endl;
        break;

    case modulo:
        cout << " Modulo: " << czyParzystaModulo(x) << endl;
        break;

    case warunkowo:
        cout << " Warunkowo: " << czyParzystaWarunkowa(x) << endl;
        break;

    default:
        cout << "Zla liczba" << endl;
        break;
    }

    return 0;
}
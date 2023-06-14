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
    int x = 8;

    cout << " Bitowo: " << czyParzystaBitowo(x) << endl;
    cout << " Modulo: " << czyParzystaModulo(x) << endl;
    cout << " Warunek: " << czyParzystaWarunkowa(x) << endl;

    x = 9;
    cout << "Teraz nieparzysta: " << x << endl;
    cout << " Bitowo: " << czyParzystaBitowo(x) << endl;
    cout << " Modulo: " << czyParzystaModulo(x) << endl;
    cout << " Warunek: " << czyParzystaWarunkowa(x) << endl;

    return 0;
}
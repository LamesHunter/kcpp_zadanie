#include <iostream>

using namespace std;

union Unia
{
    int a;
    int b;
    int c;
};
 
int main()
{
    Unia u;
    u.a = 2;
    u.b = 3;
    u.c = 4;

    /*  Trzeba  wiedzieć jakiego typu jest dana zmienna    */

    return 0;
}
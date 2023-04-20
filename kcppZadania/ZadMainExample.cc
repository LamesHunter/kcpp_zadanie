#include <iostream>
using namespace std;

// Deklaracja funkcji zadeklarowanych jako "extern C"
extern "C" void fun1()
{
    cout << "Funkcja 1" << endl;
}

extern "C" void fun2()
{
    cout << "Funkcja 2" << endl;
}

void fun3()
{
    cout << "Funkcja 3" << endl;
}

void fun4()
{
    cout << "Funkcja 4" << endl;
}

void fun5()
{
    cout << "Funkcja 5" << endl;
}

int main(){
    fun1();
    fun2();
    fun3();
    fun4();
    fun5();
    return 0;
}
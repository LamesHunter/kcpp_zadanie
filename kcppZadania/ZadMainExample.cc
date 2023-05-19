#include <iostream>
using namespace std;

// Deklaracja funkcji zadeklarowanych jako "extern C"
extern "C" void fun1()
{
    cout << "Funkcja 1" << endl;
}

extern "C" void fun2()
{
    int a = 5;
    int b = 4;
    cout << a + b << endl;
}

void fun3()
{
    int a = 5;
    int b = 4;
    cout << a - b << endl;
}

void fun4()
{
    int a = 5;
    int b = 4;
    cout << a%b << endl;
}

void fun5()
{
    int a = 5;
    int b = 4;
    cout << a*b << endl;
}

int main(){
    fun1();
    fun2();
    fun3();
    fun4();
    fun5();
    return 0;
}
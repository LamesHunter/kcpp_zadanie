#include <iostream>
using namespace std;

void OperatoryArytmetyczne();
void OperatoryPrzypisania();

int main()
{
    OperatoryArytmetyczne();
    OperatoryPrzypisania();
    return 0;
}

void OperatoryArytmetyczne()
{
    int a = 30, b = 5;
    int dodawanie = a + b; 
    int odejmowanie = a - b; 
    int mnozenie = a * b; 
    int dzielenie = a / b; 
    int reszta = a % b; 
}

void OperatoryPrzypisania()
{
    int a = 5; 
    a += 5; 
    a -= 5; 
    a *= 2; 
    a /= 2; 
    a %= 2; 
}
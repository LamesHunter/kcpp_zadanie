#include <iostream>

using namespace std;

struct Test
{
    int x;
    Test()
    {
        cout << "Konstruktor" << endl;
        x = 10;
    }
    Test(int a) : x(a) {}
    ~Test()
    {
        cout << "Destruktor" << endl;
    }
};

int main()
{
    Test t1 = Test();
    Test t2 = Test(6);

    return 0;
}
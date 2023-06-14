#include <iostream>

using namespace std;

void petlaWhile()
{
    int i = 0;
    cout << "i++" << endl;
    while (i++ < 5)
    {
        cout << "i=" << i << endl;
    }

    i = 0;
    cout << "++i" << endl;
    while (++i < 5)
    {
        cout << "i=" << i << endl;
    }
}

void petlaDoWhile()
{
    int i = 0;
    cout << "i++" << endl;
    do
    {
        cout << "i=" << i << endl;
    } while (i++ < 5);

    i = 0;
    cout << "++i" << endl;
    do
    {
        cout << "i=" << i << endl;
    } while (++i < 5);
}

void petlaFor()
{
    int i = 0;
    cout << "i++" << endl;
    for (i = 0; i < 5; i++)
    {
        cout << "i=" << i << endl;
    }

    i = 0;
    cout << "++i" << endl;
    for (i = 0; i < 5; ++i)
    {
        cout << "i=" << i << endl;
    }
}

int main()
{
    petlaWhile();
    petlaDoWhile();
    petlaFor();

    return 0;
}
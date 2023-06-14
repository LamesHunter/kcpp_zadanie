#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    cout << "Cos tam" << endl;
    cerr << "blad" << endl;
    ofstream ofile("plik.txt");
    ofile << " jestem w pliku" << endl;
    ofile.close();
    ifstream ifile("plik.txt");
    string buffer;
    while (getline(ifile, buffer))
    {
        cout << "z pliku: " << buffer;
    }
    return 0;
}
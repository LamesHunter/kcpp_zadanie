#include <iostream>
using namespace std;

class Prostokat 
{
    public: 
    Prostokat() {
        cout << "Utworzono";
    }

    ~Prostokat() {
        cout << "Zniszczono";
    }

    void setA(int liczba){
        a = liczba;
    }

    void setB(int liczba){
        b = liczba;
    }

    int getA(){
        return a;
    }

    int getB(){
        return b;
    }

    int pole(){
        return a * b;
    }

    private:
    int a;
    int b;
};



int main() {
    Prostokat *p = new Prostokat();
}

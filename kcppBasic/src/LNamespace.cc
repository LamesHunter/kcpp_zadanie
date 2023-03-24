/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Przestrzenie nazw w C++
 * v0.01
 */

#include <iostream>
using namespace std;

//---------------------------
namespace nasza {
	int k = 7;
	float pi = 3.14;
	string blad = "nie wiem co sie stalo";
	void testowa(){
		cout << "nie wiem co sie stalo ale tym razem w funkcji"<< endl;
	}
	int dodaj(int a, int b){
		cout << "ale dodaje uuuaaa" << endl;
		return a+b;
	}
}
using namespace nasza;
//---------------------------



int main(){
	//std::cout << "Test" << std::endl;
	cout << "Test" << endl;

  int k = 6;

  cout << nasza::k << endl;
  cout << k << endl;
  cout << nasza::pi << endl;
  cout << nasza::blad << endl;
  testowa();
  cout << dodaj(nasza::k, k);


	return 0;
}

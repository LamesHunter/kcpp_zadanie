#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(){
    string test = "nie wiem";
    string test1 = "nie";
    cout << "empty " << test.empty() << endl;
    cout << "size " << test.size() << endl;
    cout << "lenght " << test.length() << endl;
    test.clear();
    cout << "clear " << test << endl;
    cout << "size " << test.size() << endl;
    test = "nie wiem";
    cout << "erase " << test.erase(1) << endl;
    cout << "po erase " << test << endl;
    cout << "find " << test.find("nie") << endl;
    test.swap(test1);
    cout << "test " << test << endl;
    cout << "substr " << test.substr(1,2) << endl;
    test.append(" wiem");
    cout << "append " << test << endl;

    return 0;
}
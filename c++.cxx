#include <iostream>
#include <string>

using namespace std;

int main (){
    string name;

    cout << "Welcome" << endl;
    cout << "Whats Your Name?" << endl;

    getline(cin, name);

    cout << "Hello " << name << " Good Day!" << endl;

    return 0;
}
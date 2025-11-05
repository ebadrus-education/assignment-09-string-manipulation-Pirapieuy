#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string teks = "Belajar C++";
    for (char &c : teks) {
        c = toupper(c);
    }
    cout << "Hasil toupper: " << teks << endl;

    for (char &c : teks) {
        c = tolower(c);
    }
    cout << "Hasil tolower: " << teks << endl;
}

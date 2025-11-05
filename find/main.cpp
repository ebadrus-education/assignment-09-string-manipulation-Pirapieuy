#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Saya suka belajar C++";
    int pos = teks.find("belajar");

    if (pos != string::npos)
        cout << "\"belajar\" ditemukan pada index: " << pos << endl;
    else
        cout << "\"belajar\" tidak ditemukan" << endl;
}

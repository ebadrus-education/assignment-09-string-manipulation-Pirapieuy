#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Belajar String C++";
    string potongan = teks.substr(8, 6);
    cout << "Hasil substr: " << potongan << endl;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Saya bernama Maul";
    teks.replace(14, 4, "Rafi"); // dari index ke 14, ganti 4 karakter
    cout << "Hasil replace: " << teks << endl;
}

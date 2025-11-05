#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Halo Dunia!";
    teks.erase(4, 6); // hapus mulai index 4, sebanyak 6 karakter
    cout << "Hasil erase: " << teks << endl;
}

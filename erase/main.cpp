#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Halo Maulana!";
    teks.erase(4, 8); // hapus mulai index 4, sebanyak 8 karakter
    cout << "Hasil erase: " << teks << endl;
}

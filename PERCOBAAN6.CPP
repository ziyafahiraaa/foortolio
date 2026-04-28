#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    float jari_jari, tinggi;
    float volume, luas_permukaan;
    const float phi = 3.14;

    cout << "PROGRAM MENGHITUNG VOLUME DAN LUAS TABUNG\n";
    cout << "=========================================\n";

    cout << "Masukan Jari-jari Tabung = ";
    cin >> jari_jari;

    cout << "Masukan Tinggi Tabung = ";
    cin >> tinggi;

    volume = phi * jari_jari * jari_jari * tinggi;
    luas_permukaan = 2 * phi * jari_jari * (jari_jari + tinggi);

    cout << "\nHasil Perhitungan:\n";
    cout << "Volume Tabung = " << volume << endl;
    cout << "Luas Permukaan Tabung = " << luas_permukaan << endl;

    getch();
    return 0;
}
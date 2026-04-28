#include <iostream>
#include <conio.h>
using namespace std;

int bilangan_1;
int bilangan_2;
int hasil_penjumlahan, hasil_pengurangan, hasil_perkalian;
float hasil_pembagian;
int main()
{
    cout << "PROGRAM OPERASI ARITMATIKA \n";
    cout << "Bilangan 1 > Bilangan 2";
    cout << "Masukan Nilai Bilangan 1 = ";
    cin >> bilangan_1;
    cout << "Masukan nilai bilangan 2 = ";
    cin >> bilangan_2;

    hasil_penjumlahan = bilangan_1 + bilangan_2;
    hasil_pengurangan = bilangan_1 - bilangan_2;
    hasil_perkalian = bilangan_1 * bilangan_2;
    hasil_pembagian = bilangan_1 / bilangan_2;

    cout << "Penjumlahan Bil.1 = "<<bilangan_1<< " dan Bil.2 = "<<bilangan_2<< " adalah = "<<hasil_penjumlahan<<"\n";
    cout << "Pengurangan Bil.1 = "<<bilangan_1<< " dan Bil.2 = "<<bilangan_2<< " adalah = "<<hasil_pengurangan<<"\n";
    cout << "Perkalian Bil.1 = "<<bilangan_1<< " dan Bil.2 = "<<bilangan_2<< " adalah = "<<hasil_perkalian<<"\n";
    cout << "Pembagian Bil.1 = "<<bilangan_1<< " dan Bil.2 = "<<bilangan_2<< " adalah = "<<hasil_pembagian<<"\n";
    getche();
}
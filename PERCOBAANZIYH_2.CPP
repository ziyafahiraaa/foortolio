#include <iostream>
#include <conio.h>
using namespace std;
string nama;
int main ()
{
    cout << "PEMROGRAMAN MEMASUKAN NAMA DENGAN KALIMAT \n";
    cout << "Nama Kamu = ";
    getline (cin, nama);

    cout << " semangat belajar pemrograman mbakk " << nama;
    getche ();
}
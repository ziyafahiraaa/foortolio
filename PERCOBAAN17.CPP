#include <iostream>
#include <conio.h>
using namespace std;

int i, bawah, atas, total = 0;

int main ()
{
    cout << "PROGRAM MENGHITUNG TOTAL NILAI DARI 2 BATAS BILANGAN\n";

    cout << "Masukan Nilai Batas Bawah = ";
    cin >> bawah;

    cout << "Masukan Nilai Batas Atas = ";
    cin >> atas;

    i = bawah;

    do
    {
        total = total + i;
        i = i + 1;
    }
    while (i <= atas);

    cout << "Jadi Nilai Total antara Bilangan " << bawah 
         << " dan Bilangan " << atas 
         << " adalah = " << total;

    getche();
}
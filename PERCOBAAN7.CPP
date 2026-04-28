#include <iostream>
#include <conio.h>
using namespace std;
float nilai;
int main()
{
    cout<< "PROGRAM KONVERSI NILAI ANGKA KE HURUF \n";
    cout<< "Masukan Nilai = ";
    cin >> nilai;

    if (nilai > 95)
{
    cout << "Nilai A++";
}
else if (nilai > 90 && <= 95)
{
    cout << "Nilai A";
}
else if (nilai > 80 && <= 90)
{
    cout << "Nilai A-";
}
else if (nilai > 70 && <= 80)
{
    cout << "Nilai B";
}
else if (nilai > 65 && <= 70)
{
    cout << "Nilai B-";
}
else if (nilai > 60 && <= 65)
{
    cout << "Nilai C";
}
else if (nilai > 55 && <= 60)
{
    cout << "Nilai C-";
}
else if (nilai > 50 && <= 55)
{
    cout << "Nilai D";
}
else
{
    cout << "Nilai E"
}

getche();
}
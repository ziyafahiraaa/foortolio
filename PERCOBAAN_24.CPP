#include <iostream>
#include <conio.h>
using namespace std;
int nilai_pemrogaman[] = {90,95,70,80,75,65,81,77,73,93};
int panjang_data_arr;
int i;
int JumTot=0;
float rata_rata;

int main()
{
    panjang_data_arr = sizeof(nilai_pemrogaman)/sizeof(nilai_pemrogaman[0]);
    cout << "panjang data =" << panjang_data_arr << "\n";
    for (i=0; i<=panjang_data_arr-1; i+=1)
    {
         JumTot += nilai_pemrogaman[i];
    }
    rata_rata = JumTot/ panjang_data_arr;
    cout << "Jadi nilai rata rata dari data yang disajikan =" << rata_rata;
    getche();
}
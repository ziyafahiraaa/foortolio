#include <iostream>
#include <string> 
#include <conio.h>

using namespace std;

int main()
{
    string nama;
    int jumlah;

    
    cout << "Masukkan Nama Kamu: ";
    getline(cin, nama); 

    
    cout << "Ingin diulang berapa kali? ";
    cin >> jumlah;

    cout << "\n--- Hasil Perulangan ---\n";

  
    for (int i = 1; i <= jumlah; i++)
    {
        cout << i << ". " << nama << "\n";
    }

    cout << "\nSelesai! Tekan tombol apa saja untuk keluar.";
    getche();
    
    return 0;
}
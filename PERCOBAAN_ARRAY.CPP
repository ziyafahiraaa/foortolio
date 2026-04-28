#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    // Memasukkan data sesuai permintaanmu
    int nilai[] = {56, 78, 90, 56, 12, 45, 34, 78, 56, 34, 15, 32, 51, 78, 90, 55, 77, 35, 61, 79};
    
    // Menghitung jumlah data (n) secara otomatis
    int n = sizeof(nilai) / sizeof(nilai[0]);
    
    int jumTot = 0;
    int jumGanjil = 0;
    int countGanjil = 0;

    cout << "Data yang diolah: " << endl;
    for (int i = 0; i < n; i++) {
        cout << nilai[i] << " ";
        
        // Tambahkan ke jumlah total keseluruhan
        jumTot += nilai[i];

        // Cek apakah angka ganjil
        if (nilai[i] % 2 != 0) {
            jumGanjil += nilai[i];
            countGanjil++;
        }
    }

    // Menghitung rata-rata
    // (float) digunakan agar hasil pembagian tidak dibulatkan ke bawah
    float rata_rata_semua = (float)jumTot / n;
    float rata_rata_ganjil = (countGanjil > 0) ? (float)jumGanjil / countGanjil : 0;

    cout << "\n\n========================================" << endl;
    cout << "Hasil Analisis Data:" << endl;
    cout << "1. Rata-rata Keseluruhan  : " << rata_rata_semua << endl;
    cout << "2. Rata-rata Nilai Ganjil : " << rata_rata_ganjil << endl;
    cout << "========================================" << endl;

    cout << "\nTekan sembarang tombol untuk keluar...";
    _getch(); // Fungsi dari conio.h untuk menahan layar terminal
    return 0;
}
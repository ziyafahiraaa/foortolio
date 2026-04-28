#include <iostream>
#include <conio.h>
using namespace std;

int thn, jur, prd, no;

int main()
{
    cout << "Masukan tahun: "; 
    cin >> thn;

    cout << "Jurusan:\n";
    cout << "1. TPK\n";
    cout << "2. TBK\n";
    cout << "3. TKK\n";
    cout << "Masukan fakultas anda: "; 
    cin >> jur;

    if (jur == 1) 
    {
        cout << "Program Studi Jurusan TPK:\n";
        cout << "1. D3 Teknik Permesinan Kapal\n";
        cout << "2. D4 Teknik Permesinan Kapal\n";
        cout << "3. D4 Teknik Keselamatan dan Kesehatan Kerja\n";
        cout << "4. D4 Teknik Perpipaan\n";
        cout << "5. D4 Teknik Desain dan Manufaktur\n";
        cout << "6. D4 Teknik Pengolahan Limbah\n";
        cout << "7. D4 Teknologi Rekayasa Energi Berkelanjutan\n";
    } 
    else if (jur == 2) 
    {
        cout << "Program Studi Jurusan TBK:\n";
        cout << "1. D3 Teknik Bangunan Kapal\n";
        cout << "2. D3 Teknik Perancangan dan Konstruksi Kapal\n";
        cout << "3. D4 Teknik Perancangan dan Konstruksi Kapal\n";
        cout << "4. D4 Teknik Pengelasan\n";
        cout << "5. D4 Manajemen Bisnis\n";
        cout << "6. D4 Teknologi Rekayasa Konstruksi Perkapalan\n";
        cout << "7. D2 Teknik Pengelasan dan Fabrikasi\n";
    } 
    else if (jur == 3) 
    {
        cout << "Program Studi Jurusan TKK:\n";
        cout << "1. D3 Teknik Kelistrikan Kapal\n";
        cout << "2. D4 Teknik Kelistrikan Kapal\n";
        cout << "3. D4 Teknik Otomasi\n";
    }
    else 
    {
        cout << "Jurusan tidak ditemukan!\n";
    }

    cout << "Masukan pilihan anda: "; 
    cin >> prd;
    cout << "Masukan Nomor Urut: "; 
    cin >> no;

    cout << "\nNPM: " << thn << ".0" << jur << ".0" << prd << "." << no;

    getche();
}
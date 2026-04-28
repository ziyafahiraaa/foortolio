#include <iostream>
#include <conio.h>
using namespace std;
int n;
int nilai[100];
int i;
int JumTot = 0;
float rata_rata;

int main()
{
    cout << "Masukkan Jumlah Data=";
    cin >> n;
    cout << "Masukkan Data dalam Array \n";
    for (i = 1; i <= n; i += 1)
    {
        cout << "Masukkan Data ke-" << i << ":";
        cin >> nilai[i];
        JumTot += nilai[i];
    }
    rata_rata = JumTot / n;
    cout << "Jadi Nilai Rata Rata Dari Data yang Disajikan =" << rata_rata;
    getche();
}
#include <iostream>
using namespace std;

int main()
{
    double total, diskon, bayar;

    cout << "Masukkan total pembayaran: ";
    cin >> total;

    if (total > 500000) 
    {
        diskon = 0.17 * total;
    }
    else if (total >= 400000 && total <= 500000)
    {
        diskon = 0.15 * total;
    }
    else if (total >= 250000 && total <= 400000)
    {
        diskon = 0.10 * total;
    }
    else 
    {
        diskon = 0.05 * total;
    }

    bayar = total - diskon;

    cout << "Jadi pembayaran yang harus dilakukan sebesar: "<< bayar << endl;

    return 0;
}
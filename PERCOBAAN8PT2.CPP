#include <iostream>
#include <conio.h>
using namespace std;
float total ;
int main()
{
    cout<< "PROGRAM KASIR SEDERHANA \n";
    cout<< "Masukan Harga Total = ";
    cin >> total;

    if (total > 500000)
    {
        cout << "Diskon 17%";
    }
    else if(total <= 500000)
    {
        cout << "Diskon 15%";
    }
    else if (total <= 400000)
    {
        cout << "Diskon 10%";
    }
    else if (total < 400000)
    {
        cout << "Diskon 5%";
    }

    getche();
}
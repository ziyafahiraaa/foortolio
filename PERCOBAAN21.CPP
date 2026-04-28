#include <iostream>
#include <conio.h>
using namespace std;

int i, x = 1;
int n;

int main()
{
    cout << "Masukkan bilangan: ";
    cin >> n;

    do 
    {
        x = x * i;
    }
    while (i <= n);

    cout << "Faktorial dari " << n << " adalah = " << x;

    getche();
    return 0;
}
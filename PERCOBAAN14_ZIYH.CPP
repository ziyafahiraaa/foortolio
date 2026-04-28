#include <iostream>
#include <conio.h>
using namespace std;

int i, x = 1;
int n;

int main()
{
    cout << "Masukkan bilangan: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        x = x * i;
    }

    cout << "Faktorial dari " << n << " adalah = " << x;

    getche();
    return 0;
}

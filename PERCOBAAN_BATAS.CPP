#include <iostream>
#include <conio.h>
using namespace std;

int i, x = 0;
int bawah, atas; 

int main() {
    cout << "masukan nilai batas bawah = ";
    cin >> bawah; 
    
    cout << "masukan nilai batas atas = ";
    cin >> atas; 

    for (i = bawah; i <= atas; i++) 
    {
        x = x + i;
        cout << i << " ==> " << x << endl;
    }

    cout << "jadi jumlah nilai total antara " << bawah << " dan " << atas <<" adalah = \n" << x;
    
    getche();
    return 0;
}
#include <iostream>
#include <conio.h>
using namespace std;
int i, x=0;
int main()
{
    for (i=1; i<=5; i+=1)
    {
        x = x + i;
        cout << i << " ==> " <<x<<"\n";
    }

    getche();
}
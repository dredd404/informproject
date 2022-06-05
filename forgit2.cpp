#include <iostream>
#include <conio.h>          
using namespace std;
int main()
{
    double edge, volume; 
    cout << "vvedite rebro: "; 
    cin >> edge; 
    volume = edge * edge * edge; 
    cout << "ob'em kuba raven: " << volume; 
    getch(); 
    return 0;
}

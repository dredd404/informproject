#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    setlocale(0, "");
    double a, b;
    cout << "введите первое число= :)" << endl;
    cout << "например: 5^2" << endl;
    cout << "введите a : " << endl;
    cin >> a;
    cout << "введите b= : " << endl;
    cin >> b;
    cout << "результат *степень* = " << pow(a,b) << endl;
    cout << "результат *степень* умноженный на b = " << pow(a,b)*b << endl;
    cout << "логарим результата= " << log(pow(a,b)*b) << endl;
 
    return 0;
}


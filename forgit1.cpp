#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    setlocale(0, "");
    double a, b;
    cout << "������� ������ �����= :)" << endl;
    cout << "��������: 5^2" << endl;
    cout << "������� a : " << endl;
    cin >> a;
    cout << "������� b= : " << endl;
    cin >> b;
    cout << "��������� *�������* = " << pow(a,b) << endl;
    cout << "��������� *�������* ���������� �� b = " << pow(a,b)*b << endl;
    cout << "������� ����������= " << log(pow(a,b)*b) << endl;
 
    return 0;
}


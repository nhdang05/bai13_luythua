// bai13_luythua.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

int main()
{
    long long a, b, result;
    cout << "nhap vao a: ";
    cin >> a;
    cout << "Nhap vao luy thua b: ";
    cin >> b;

    result = pow(a, b);
    cout << "Ket qua cua phap tinh la: ";
    cout << result << endl;

    return 0;
}
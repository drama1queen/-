#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>
using namespace std;
double f(int &s)
{
    double a, c;
    a = pow((s / 0, 1875), 1/2);
    c = sqrt(a * a + a * a);
    return a * 2 + c;
}

int main()
{
    int s;
    cin >> s;
    cout << f(s);
}
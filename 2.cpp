#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double f(double x, double y, double z)
{
    double g = 6.67 * (1e-11);
    return g * (x * y) / (z * z);
}

int main()
{
    double m1, m2, m3, r1, r2, r3, t;
    cin >> m1 >> m2 >> m3;
    cin >> r1 >> r2 >> r3;
    t = min(f(m1, m2, r3), f(m2, m3, r1), f(m3, m1, r2));
    if (t == f(m1, m2, r3))
    {
        cout << f(m2, m3, r1) << ' ' << f(m3, m1, r2);
    }
    if else(t == f(m2, m3, r1))
    {
        cout << f(m1, m2, r3) << ' ' << f(m3, m1, r2);
    }
    else
    {
        cout << f(m1, m2, r3) << ' ' << f(m2, m3, r1);
    }
}
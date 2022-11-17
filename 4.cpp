#include <iostream>

using namespace std;
double f(double x, double y)
{
    return x + y;
}

int main()
{
    double a, b;
    cin >> a >> b;
    cout << f(a, b) << endl;
}
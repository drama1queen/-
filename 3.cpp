#include <iostream>

using namespace std;
bool f(double& b)
{
    if (b < 0)
    {
        b = b * (-1);
    }
    if (b != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    double a;
    cin >> a;
    cout << f(a) << endl;
}
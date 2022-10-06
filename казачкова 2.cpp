

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y, z;
    double p, s;
    cin >> x >> y >> z;
    p = (x + y + z) / 2;
    s = sqrt(p * (p - x) * (p - y) * (p - z));
    cout << s << endl;
}


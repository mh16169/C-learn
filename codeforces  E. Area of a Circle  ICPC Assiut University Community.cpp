#include <bits/stdc++.h>

using namespace std;

int main()
{

    double R, area;
    const double pi = 3.141592653;

    cin >> R;
    area = pi * (R * R);

    cout << fixed << setprecision(9) << area << endl;

    return 0;
}
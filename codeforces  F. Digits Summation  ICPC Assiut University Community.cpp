#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int N, M;

    int summation, temp1, temp2;

    cin >> N >> M;

    temp1 = N % 10;
    temp2 = M % 10;

    summation = temp1 + temp2;

    cout << summation << endl;

    return 0;
}
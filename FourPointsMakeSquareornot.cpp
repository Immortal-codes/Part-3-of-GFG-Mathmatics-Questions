#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{

    int d = 2;
    int sum = 0;
    sum = pow(10, d) - 1;
    while (d)
    { int k=0;
        k= sum - pow(9, d);
        d--;
    }

    cout << sum;
}
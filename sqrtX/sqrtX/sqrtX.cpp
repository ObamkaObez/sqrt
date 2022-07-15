#include <iostream>
#include <fstream>
#include <math.h>
#include <iomanip>

using namespace std;


int main() {
    long double x, eps, i = 1;
    ifstream in("input.txt");
    ofstream out("output.txt");
        in >> x >> eps;
        long double y0 = x;
        long double y1 = (0.5) * (y0 + x / y0);
        while (fabs(y1 - y0) > eps)
        {
            y0 = y1;
            y1 = (0.5) * (y0 + x / y0);
        }
        out << setprecision(10) << y1;
        out.close();
    return 0;
}
